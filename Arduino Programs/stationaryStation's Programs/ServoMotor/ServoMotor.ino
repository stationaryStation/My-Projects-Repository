#include <Servo.h>
#include <tones.h>
Servo motor;
void setup()
{
    
   motor.attach(7);
    motor.write(170);
    delay(1200);
    motor.write(0);
    delay(1200);
    motor.write(-45); 
}

void loop()
{
  
}
