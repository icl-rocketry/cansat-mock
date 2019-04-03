/*
Author: Daniel V Bella
library to combine all the data to send into a single string
*/

#ifndef WordCreator_h
#define WordCreator_h

#include <Arduino.h>

class transportObject
{

public:
  transportObject();
  String create(
      unsigned int packetCount, unsigned int nowTime,
      float pressure, float temperature, float altitude, float velocity,
      float battPercent, uint8_t softState,
      float accelX, float accelY, float accelZ);
};

#endif
