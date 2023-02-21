/*
Create a new sketch that will read data from serial communication port with 
the read command. For each byte read, print the binary value, the hexadecimal value,
and the decimal value to the Serial output.
output format input '1'
READ '1' - DEC: 49, HEX: 0x31, BIN: 110001 .. done
*/

#include <M5Stack.h>

void setup() {
    M5.begin();                         //initialise the M5Stack
    Serial.begin(9600);                 //initialise the serial communication
}

void loop() {
    if (Serial.available()) {           //if there is data available on the serial port
        int data = Serial.read();       //read the data from the serial port
        Serial.print("READ '");         //print "READ '"
        Serial.print(data);             //print the data
        Serial.print("' - DEC: ");      //print "' - DEC: "
        Serial.print(data, DEC);        //print the data in decimal
        Serial.print(", HEX: 0x");      //print ", HEX: 0x"
        Serial.print(data, HEX);        //print the data in hexadecimal
        Serial.print(", BIN: ");        //print ", BIN: "
        Serial.println(data, BIN);      //print the data in binary
    }
    M5.update();                        //update the M5Stack
}