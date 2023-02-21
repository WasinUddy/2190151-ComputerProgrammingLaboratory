/*
Making M5Stack play sudbsquent notes of the Jingle Bells song for the duration when the A button is pressed and hold after release the notes proceed to the next note when
the button is pqressed again
*/

#include <M5Stack.h>

const int C = 262;
const int D = 294;
const int E = 330;
const int F = 349;
const int G = 392;
const int A = 440;
const int B = 494;

const int note[] = {E, E, E, E, E, E, E, G, C, D , E, F, F, F, F, F, E, E, E, D, D, E, D, G};

int currentNote = 0;

void setup() {
    M5.begin();                 //initialise the M5Stack
}


void loop() {
    if (M5.BtnA.isPressed()) {
        M5.Speaker.tone(note[currentNote]);
    }
    if (M5.BtnA.wasReleased()) {
        M5.Speaker.mute();
        currentNote++;
    }
}