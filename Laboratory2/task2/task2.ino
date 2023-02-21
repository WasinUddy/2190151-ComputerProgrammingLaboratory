/*
Changing the M5Stack button to toggle the LED (must complete all the buttons)
*/

#include <M5Stack.h>


const int LED2 = 3;             //define LED2 as digital PIN 3
int LED2State = LOW;            //define LED2State as LOW LED OFF
void main() {
    M5.begin();                 //initialise the M5Stack
    pinMode(LED2, OUTPUT);      //set LED2 as output
}

void loop() {
    if (M5.BtnA.wasPressed() || M5.BtnB.wasPressed() || M5.BtnC.wasPressed()) {  //if button A, B, or C was pressed
        LED2State = !LED2State;         //toggle LED2State
        digitalWrite(LED2, LED2State);  //set LED2 to LED2State
    }

    M5.update();
}