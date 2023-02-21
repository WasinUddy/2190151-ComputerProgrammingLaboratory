/*
Modify the sketch from task 1 to print the word "Clicked" when Button A is Clicked Also print the number of clicks so far
*/

#include <M5Stack.h>

int clickCount = 0;                         //define clickCount as 0

void setup() {
    M5.begin();                             //initialise the M5Stack
    Serial.begin(9600);                     //initialise the serial communication
}

void loop() {
    if (M5.BtnA.wasPressed()) {                   //if button A is pressed
        clickCount++;                             //increment clickCount
        Serial.print("Clicked ");                 //print "Clicked" on the serial output
        Serial.println(clickCount);               //print the number of clicks so far
    } 
    M5.update();                                  //update the M5Stack
}