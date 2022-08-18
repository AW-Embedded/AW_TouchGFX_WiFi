#include "wifi_app.h"


/* Required interfaces to net_core*/
extern int32_t es_wifi_driver(net_if_handle_t * pnetif);
net_if_handle_t netif;
net_event_handler_t net_handler;
net_if_driver_init_func es_wifi_driver_ptr = &es_wifi_driver;
net_wifi_scan_results_t APs[MAX_LISTED_AP];

/* Data storage - Defined in model.cpp */
extern uint8_t password_ascii[64];
extern uint8_t ssid_ascii[32];
extern uint8_t encryption_ascii[30];


/**
  * @brief  Network interface initialization
  * @param  none
  * @retval 0 in case of success, an error code otherwise
  */
static int wifi_networkInit(void)
{
  if (net_if_init(&netif, es_wifi_driver_ptr, &net_handler) != NET_OK)
  {
    return -1;
  }

  net_if_wait_state(&netif,NET_STATE_INITIALIZED,STATE_TRANSITION_TIMEOUT);
  if ( net_if_start (&netif) != NET_OK )
  {
    return -1;
  }

  net_if_wait_state(&netif,NET_STATE_READY,STATE_TRANSITION_TIMEOUT);

  return 0;
}

/**
  * @brief  Initializes module wifi network interface
  * @param  none
  * @retval none
  */
void wifi_initialise(void)
{
    wifi_networkInit();
}

/**
  * @brief  Get available access points
  * @param  APs: pointer Access points structure
  * @retval ES Wifi status
  */
int32_t wifi_scan(net_wifi_scan_results_t *APs)
{
  int32_t ret;
  ret = net_wifi_scan(&netif,NET_WIFI_SCAN_PASSIVE,NULL);
  if (ret == NET_OK)
  {
    ret = net_wifi_get_scan_results(&netif,APs,MAX_LISTED_AP);
    if (ret > 0) ret= NET_OK;
  }
  return ret;
}

/**
  * @brief  Connect network interface
  * @param  ssid: wifi network name
  * @param  password:  access point password
  * @param  encryption : security mode
  * @retval 0 in case of success, an error code otherwise
  */
int8_t wifi_connect(char *ssid, uint8_t *password, int32_t encryption )
{  
  net_wifi_credentials_t  Credentials = 
  {
    (char const*) ssid,
    (char const*)password,
    encryption
  };
  
  if (net_wifi_set_credentials(&netif, &Credentials) != NET_OK)
  {
    return -1;
  }
  
  if (netif.state == NET_STATE_CONNECTING )
  {
    netif.state = NET_STATE_CONNECTED ; 
  }
    
  if (netif.state == NET_STATE_CONNECTED ) 
  {
    if(net_if_disconnect(&netif)!= NET_OK)
    {
      return  -1;
    }
  }
  
  if(net_if_connect (&netif) != NET_OK)
  {
    return -1;
  }

  return NET_OK;
}


/*
 * WiFi Task
 * - Handle requests from GUI task
 * - Return status to GUI task
 */
void esWiFi_Task(void *argument)
{
    uint8_t msg;
    uint8_t retvalue;

    wifi_scan(&APs[0]);

    for (;;)
    {
        osMessageQueueGet(WiFi_QueueHandle, &msg, 0, osWaitForever);

        switch(msg)
        {
            case UPDATE_WIFI_AP:
                memset(&APs, 0, sizeof(APs));

                if(wifi_scan(&APs[0]) == NET_OK)
                {
                    retvalue = UPDATE_WIFI_AP_DONE;
                    osMessageQueuePut(GUI_QueueHandle, &retvalue, 0, 0);
                }
            break;

            case CONNECTING_TO_WIFI:
                if(wifi_connect((char*)ssid_ascii, password_ascii, net_wifi_string_to_security((char*)encryption_ascii)) != NET_OK)
                {
                    retvalue = CONNECTING_TO_WIFI_ERROR;
                    osMessageQueuePut(GUI_QueueHandle, &retvalue , 0, 0);
                }
                else
                {
                    retvalue = CONNECTING_TO_WIFI_OK;
                    osMessageQueuePut(GUI_QueueHandle, &retvalue , 0, 0);
                }
            break;

            default:
                break;
        }
    }
}
