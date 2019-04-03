# CanSat Mock
This repository contains code to mock the serial output of the Xbee connected to the Ground Control Station during operation. This is meant to be used while developing [cansat-gcs](https://github.com/icl-rocketry/cansat-gcs).

## Usage
This is a [Platform.io](https://platformio.org/) project. Upload `src/main.cpp` to an ardunio based microcontroller, conencted to the host computer. Once, the program has started running on the arduino, it will output data frames with random data to the connected serial port.
