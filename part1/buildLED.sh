#!/bin/bash
echo "Building the derek_LED applications"
g++ -Wall myApp.cpp derek_LED.cpp -o derekLED
echo "Finished"