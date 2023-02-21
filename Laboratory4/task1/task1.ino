/*
Short Melody
*/

#include <M5Stack.h>

const int C = 262;
const int D = 294;
const int E = 330;
const int F = 349;
const int G = 392;
const int A = 440;
const int B = 494;

const int note[] = {C*2, G, G, A, G, 0, B, C*2};            //define note as an array of integers
const int noteDuration[] = {4, 8, 8, 4, 4, 4, 4, 4};        //define noteDuration as an array of integers
const int noteDelay[] = {50, 50, 50, 50, 50, 50, 50, 50}    //define noteDelay as an array of integers
void setup() {
    M5.begin();                 //initialise the M5Stack
}

void loop() {
    for (int currentNote=0; currentNote<sizeof(note)/sizeof(int); currentNote++) {   //for each note in the array
        int wait = 1000/noteDuration[currentNote];                                   //calculate the wait time for the note to be played based on the noteDuration 8 = 125ms, 4 = 250ms, 2 = 500ms, 1 = 1000ms
        M5.Speaker.tone(note[currentNote]);                                          //play the note
        delay(wait);                                                                 //wait for the note to be played
        M5.Speaker.mute();                                                           //stop playing the note
        delay(noteDelay[currentNote]);                                               //wait for the noteDelay 0 will be continueous
    }
    M5.Speaker.mute();                                                               //stop playing the note
    delay(2000);                                                                     //wait for 1 second
    M5.update();
}