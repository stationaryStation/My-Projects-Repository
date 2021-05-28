#include <Servo.h>
//  Define Variables
Servo motor;
int triggerpin = 7;
int echopin = 6;
// Setup Pins and test the servo.
void setup()
{
    Serial.begin(9600);

    motor.attach(10);
    pinMode(triggerpin, OUTPUT);
    pinMode(echopin, INPUT);
    pinMode(13, OUTPUT);
    motor.write(180);
    delay(500);
}

void loop()
{
    // Declare a integer named "cm" including the ping method
    int cm = ping(triggerpin, echopin);
    Serial.println(cm);
    delay(100);
    // if cm <= 5 then pickup that object else retract.
    if (cm <= 5 ) {
        Serial.println("RECOGER");
        recoger();
    }else {
        Serial.println("CERRAR");
        cerrar();
        delay(1000);
    }
}
// Define the function "recoger();"
void recoger() {
    tone(13, 292, 500);
    delay(100);
    noTone(13);
    motor.write(10);
}
// Define the function "cerrar();"
void cerrar() {
    delay(100);
    motor.write(180);
}
// Define the function ping as an integer.
int ping(int TriggerPin, int EchoPin) {
    long duration, distanceCm;

    digitalWrite(TriggerPin, LOW);
    delayMicroseconds(5);
    digitalWrite(TriggerPin, HIGH);
    delayMicroseconds(5);
    digitalWrite(TriggerPin, LOW);
    
    duration = pulseIn(EchoPin, HIGH);

    distanceCm = (duration * 10/292/2);

    return distanceCm;
    
}