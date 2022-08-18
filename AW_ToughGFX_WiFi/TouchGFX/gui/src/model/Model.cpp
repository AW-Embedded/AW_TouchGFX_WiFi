#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#include <stdint.h>

uint8_t password_ascii[64];
uint8_t ssid_ascii[32];
uint8_t encryption_ascii[30];

Model::Model() : modelListener(0)
{

}

void Model::tick()
{

}
