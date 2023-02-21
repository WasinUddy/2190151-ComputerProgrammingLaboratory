/*
Serial Piano enter notes and play them on the M5Stack
*/

#include <M5Stack.h>

const int C = 262;
const int D = 294;
const int E = 330;
const int F = 349;
const int G = 392;
const int A = 440;
const int B = 494;


void setup() {
    M5.begin();                 //initialise the M5Stack

}

void loop() {
    if (Serial.available()) {
        char note = Serial.read();
        tone(note);
        Serial.println("Please enter a note [c..a, C..A]");
        Serial.print("> ");
    }
    M5.update();
}

void tone(char note) {
    switch (note) {
        case 'c':
            M5.Speaker.tone(C);
            delay(1000);
            break;
        case 'C':
            M5.Speaker.tone(C*2);
            delay(1000);
            break;
        case 'd':
            M5.Speaker.tone(D);
            delay(1000);
            break;
        case 'D':
            M5.Speaker.tone(D*2);
            delay(1000);
            break;
        case 'e':
            M5.Speaker.tone(E);
            delay(1000);
            break;
        case 'E':
            M5.Speaker.tone(E*2);
            delay(1000);
            break;
        case 'f':
            M5.Speaker.tone(F);
            delay(1000);
            break;
        case 'F':
            M5.Speaker.tone(F*2);
            delay(1000);
            break;
        case 'g':
            M5.Speaker.tone(G);
            delay(1000);
            break;
        case 'G':
            M5.Speaker.tone(G*2);
            delay(1000);
            break;
        case 'a':
            M5.Speaker.tone(A);
            delay(1000);
            break;
        case 'A':
            M5.Speaker.tone(A*2);
            delay(1000);
            break;
        case 'b':
            M5.Speaker.tone(B);
            delay(1000);
            break;
        case 'B':
            M5.Speaker.tone(B*2);
            delay(1000);
            break;
    }
}