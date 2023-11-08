//File which contains the application. This has added functionality allowing you to blink an LED. Example Invocation: ./derekLED on <-- Will turn on LED. Can use command on off flash or status

#include "derek_LED.h"

int main(int argc, char* argv[]){
   if(argc!=2 && argc != 4){
	cout << "Usage is blinkLED <command>" << endl;
        cout << "   command is one of: on, off, flash, status or blink led numBlinks" << endl;
	cout << " e.g. makeLEDs flash" << endl;
   }
   cout << "Starting the myBlink program" << endl;
   string cmd(argv[1]);
   
   //initialize so its compatable with other commands
   int ledToBlink = 0; 
   int numBlinks = 0; 
   
   // if there are 3 arguments
   if(argc == 4) {
      ledToBlink = atoi(argv[2]); // convert the string argument to integer
      numBlinks = atoi(argv[3]); // convert the string argument to integer
   } 

   LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
   for(int i=0; i<=3; i++){
      if(cmd=="on")leds[i].turnOn();
      else if(cmd=="off")leds[i].turnOff();
      else if(cmd=="flash")leds[i].flash("100"); //default is "50"
      else if(cmd=="status")leds[i].outputState();
      else if(cmd=="blink" && i == ledToBlink){
         leds[i].blink(numBlinks);
      } else { cout << "Invalid command!" << endl; }
   }
   cout << "Finished the makeLEDs program" << endl;
   return 0;
}