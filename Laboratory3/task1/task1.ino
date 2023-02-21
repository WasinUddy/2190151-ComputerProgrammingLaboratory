/*
Create a sketch that sends inputs from the M5Stack development kit to serial communication output
In your sketch, read data from button A and send the result to the Serial output
*/

#include <M5Stack.h>

void setup() {
    M5.begin();                         //initialise the M5Stack
    Serial.begin(9600);                 //initialise the serial communication
}

void loop() {
    if (M5.BtnA.isPressed()) {                   //if button A is pressed
        Serial.println("*****Pressed*****");     //print "Button A was pressed" on the serial output
    } else {
        Serial.println("*****Released*****");    //print "Button A was released" on the serial output
    }
    M5.update();                                 //update the M5Stack
}