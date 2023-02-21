/*Showing your names and ids of all your group members 
on seperate lines with different colors
on the LCD screen with text size setting to 5*/

#include <M5Stack.h>

void main() {
    M5.begin();                                        //initialise the M5Stack
    M5.Lcd.setTextSize(5);                             //set text size to 5
    M5.Lcd.setTextColor(RED);                          //set text color to red
    M5.Lcd.println("Prayut Chan-O-Ch 1234");           //print "Prayut Chan-O-Cha 1234" on the LCD screen
    M5.Lcd.setTextColor(GREEN);                        //set text color to green
    M5.Lcd.println("Prawit Wongsuwa 5678");            //print "Prawit Wongsuwan 5678" on the LCD screen
    M5.Lcd.setTextColor(BLUE);                         //set text color to blue
    M5.Lcd.println("Apirat Kongsompon 9012");          //print "Apirat Kongsompon 9012" on the LCD screen

void loop() {
    //pass
}