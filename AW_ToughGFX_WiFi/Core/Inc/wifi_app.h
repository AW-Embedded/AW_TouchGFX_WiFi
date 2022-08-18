#ifndef __WIFI_APP_H
#define __WIFI_APP_H
#ifdef __cplusplus
extern "C" {
#endif
  
#include "stm32h7xx_hal.h"
#include "cmsis_os.h"
#include "net_connect.h"
#include "net_internals.h"

// Defined in main.c before RTOS schedulaer starts
extern osMessageQueueId_t WiFi_QueueHandle;
extern osMessageQueueId_t GUI_QueueHandle;

typedef enum {    
  UPDATE_WIFI_AP = 0,
  UPDATE_WIFI_AP_DONE,
  CONNECTING_TO_WIFI,
  CONNECTING_TO_WIFI_OK,
  CONNECTING_TO_WIFI_ERROR,
  JSON_DATA_ERROR,    
}WIFI_APP_STATUS;
   
#define STATE_TRANSITION_TIMEOUT                10000
#define RETRY_REQUEST_NUMBER                    10
#define MAX_LISTED_AP                           10
  
void    wifi_initialise(void);
int32_t wifi_scan(net_wifi_scan_results_t *APs);
int8_t  wifi_connect(char *ssid, uint8_t *password, int32_t encryption );

#ifdef __cplusplus
}
#endif
#endif /* __WIFI_APP_H */
