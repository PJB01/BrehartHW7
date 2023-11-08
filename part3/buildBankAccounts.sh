#!/bin/bash
echo "Building the bankAccount application"
g++ -Wall bankApp.cpp bankAccount.cpp -o bankAccount
echo "Finished"