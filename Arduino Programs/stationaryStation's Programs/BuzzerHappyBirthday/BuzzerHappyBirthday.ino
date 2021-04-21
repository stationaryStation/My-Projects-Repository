// BuzzerHappyBirthday by stationaryStation
// A buzzer and pitches.h are required to run the code. 
// More of this is available at www.github.com/stationaryStation/My-Projects-Repository/
//  Coded in VSCODE with PlatformIO and Arduino 1.18.13
#include "pitches.h"

void setup()
{
    tone(6, NOTE_G5, 300);
    delay(500);
    tone(6, NOTE_G5, 200);
    delay(500);
    tone(6, NOTE_A5, 300);
    delay(500);
    tone(6, NOTE_G5, 500);
    delay(500);
    tone(6, NOTE_C5, 500);
    delay(500);
    tone(6, NOTE_B5, 300);
    delay(500);
    tone(6, NOTE_G5, 300);
    delay(500);
    tone(6, NOTE_G5, 200);
    delay(500);
    tone(6, NOTE_A5, 300);
    delay(500);
    tone(6, NOTE_G5, 500);
    delay(500);
    tone(6, NOTE_C5, 500);
    delay(500);
    tone(6, NOTE_D5, 600);
    delay(600);
    tone(6, NOTE_C5, 300);
    delay(500);
    tone(6, NOTE_C5, 300);
    delay(500);
    tone(6, NOTE_E5, 400);
    delay(500);
    tone(6, NOTE_G5, 300);
    delay(500);
    tone(6, NOTE_E5, 400);
    delay(500);
    tone(6, NOTE_C5, 400);
    delay(500);
    tone(6, NOTE_B5, 300);
    delay(500);
    tone(6, NOTE_A5, 400);
    delay(500);
    tone(6, NOTE_F5, 400);
    delay(500);
    tone(6, NOTE_F5, 400);
    delay(500);
    tone(6, NOTE_F5, 400);
    delay(500);
    tone(6, NOTE_C5, 400);
    delay(500);
    tone(6, NOTE_D5, 400);
    delay(500);
    tone(6, NOTE_C5,1500);
    delay(5000);


}

void loop()
{
    // Test Tone: Put your finger on the buzzer until it sounds good, there is a 5 second timeout.
    tone(6,NOTE_E1,500);
    delay(500);
    tone(6, NOTE_E2,500);
    delay(500);
    tone(6, NOTE_E3,500);
    delay(500);
    tone(6, NOTE_E4,500);
    delay(500);
    tone(6, NOTE_E5,500);
    delay(500);
    tone(6, NOTE_E6,500);
    delay(500);
    tone(6, NOTE_E7,500);
    delay(5000);
}