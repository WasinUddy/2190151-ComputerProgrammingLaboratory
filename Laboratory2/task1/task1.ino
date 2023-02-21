/*
LED Toggling 
LED2 configuration using GD and digital PIN
*/

#include <M5Stack.h>

const int LED2 = 3;             //define LED2 as digital PIN 3
int LED2State = LOW;            //define LED2State as LOW
void main() {
    M5.begin();                 //initialise the M5Stack
    pinMode(LED2, OUTPUT);      //set LED2 as output
}

void loop() {
    if (M5.BtnA.wasPressed()) {         //if button A is pressed
        LED2State = !LED2State;         //toggle LED2State
        digitalWrite(LED2, LED2State);  //set LED2 to LED2State
    }

    M5.update();
}