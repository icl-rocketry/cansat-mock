#include <Arduino.h>

unsigned int i = 1;

void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.println(++i);
}
