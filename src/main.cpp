#include <Arduino.h>
#include "WordCreater.h"
#include <math.h>

transportObject trObj;
unsigned int packetCount = 0;
float pressure = (float)random(100325, 101325);
float temperature = (float)random(20, 25);
float altitude = (float)random(100, 120);
float velocity = (float)random(10, 20);
float battPercent = (float)random(90, 100);
uint8_t softState = 0;
float accelX, accelY, accelZ;
float orientX = 0.5;
float orientY = 0.5;
float orientZ = 0.5;
unsigned int nowtime;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if (battPercent < 0 || altitude < 0)
    return;
  nowtime = millis();
  accelX = random(-10, 10) / 10.0;
  accelY = random(-10, 10) / 10.0;
  accelZ = random(-10, 10) / 10.0;
  orientX += accelX / 10.0;
  orientY += accelY / 10.0;
  orientZ += accelZ / 10.0;
  velocity += sqrt(pow(accelX, 2) + pow(accelY, 2) + pow(accelZ, 2));
  pressure += random(-3, 4);
  altitude += random(-5, 0) / 10.0;
  battPercent += random(-5, 0) / 100.0;

  Serial.println(
      trObj.create(
          ++packetCount, nowtime, pressure, temperature, altitude, velocity,
          battPercent, softState, accelX, accelY, accelZ,
          orientX, orientY, orientZ));
}
