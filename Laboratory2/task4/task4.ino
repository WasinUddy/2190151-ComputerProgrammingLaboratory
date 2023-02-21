/*
Changing the configuration of the cconnection between the LED and the M5Stack to LED1 using 5V and Digital PIN 2
*/

#include <M5Stack.h>

const int LED1 = 3;             //define LED1 as digital PIN 3
int LED1State = HIGH;            //define LED2State as HIGH LED OFF
void main() {
    M5.begin();                 //initialise the M5Stack
    pinMode(LED2, OUTPUT);      //set LED2 as output
}

void loop() {
    if (M5.BtnA.wasPressed() || M5.BtnB.wasPressed() || M5.BtnC.wasPressed()) {  //if button A, B, or C was pressed
        LED1State = !LED1State;         //toggle LED2State
        digitalWrite(LED1, LED1State);  //set LED2 to LED2State
    }

    M5.update();
}