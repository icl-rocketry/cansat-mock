/*
Author: Daniel V Bella
library to combine all the data to send into a single string
*/

// Libraries
#include "Arduino.h"
#include "WordCreater.h"

// Create new instance of library
transportObject::transportObject()
{
}

// Concatenates all the data into a single string
String transportObject::create(
    unsigned int packetCount, unsigned int nowTime,
    float pressure, float temperature,
    float altitude, float velocity,
    float battPercent, uint8_t softState,
    float accelX, float accelY, float accelZ)
{
  // Delimiter is ":", delimiter between lines is "&"
  return String(packetCount) + ":" + String(nowTime) + ":" + String(pressure, 1) + ":" + String(temperature, 1) + ":" + String(altitude, 1) + ":" + String(velocity, 1) + ":" + String(battPercent, 0) + ":" + String(softState) + ":" + String(accelX) + ":" + String(accelY) + ":" + String(accelZ);
}
