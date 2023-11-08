#!/bin/bash
echo "Building the blinkLED application"
g++ -Wall myBlink.cpp derek_LED.cpp -o blinkLED
echo "Finished"