/*Settings up your Arduino Development Platform for your M5Stack
showing "Hello World" on the LCD screen of the M5Stack*/

#include <M5Stack.h>

void setup() {
    M5.begin();                         //initialise the M5Stack
    M5.Lcd.println("Hello World");      //print "Hello World" on the LCD screen
}

void loop() {
  //pass
}