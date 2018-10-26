/*************************************************** 
  This is a library for the Adafruit Thermocouple Sensor w/MAX31855K

  Designed specifically to work with the Adafruit Thermocouple Sensor
  ----> https://www.adafruit.com/products/269

  These displays use SPI to communicate, 3 pins are required to  
  interface
  Adafruit invests time and resources providing this open source code, 
  please support Adafruit and open-source hardware by purchasing 
  products from Adafruit!

  Written by Limor Fried/Ladyada for Adafruit Industries.  
  BSD license, all text above must be included in any redistribution
 ****************************************************/

#ifndef ADAFRUIT_MAX31855_H
#define ADAFRUIT_MAX31855_H

#include <Arduino.h>
#include <SPIDevice.h>
#include <SPI.h>

class MAX31855 : SPIDevice {
    public:
        MAX31855(SPIClass& spi, const uint8_t cs) 
            : SPIDevice(spi, cs, SPISettings(4000000, MSBFIRST, SPI_MODE0)) {}

        void begin() {};
        double readInternal();
        double readCelsius();
        double readFarenheit();
        uint8_t readError();
};

#endif