#include <Arduino.h>
#include "config.h"

uint32_t configVersion = 1961612519; //generated identifier to compare config with EEPROM

const configData defaults PROGMEM =
{
	"Future Technologies Inc.",
	"ru",
	"192.168.0.100"
};