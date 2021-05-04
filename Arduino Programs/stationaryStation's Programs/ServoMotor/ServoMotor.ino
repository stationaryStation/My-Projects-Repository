#include <Servo.h>
#include "pitches.h"
Servo motor;
void setup()
{
    

}
void loop()
{
     motor.attach(7);
    motor.write(170);
    tone(6, NOTE_B5, 300);
    delay(1200);
    motor.write(0);
    delay(1200);
    motor.write(-45); 
    tone(6, NOTE_E6, 300);
    delay(1200);
    
}
