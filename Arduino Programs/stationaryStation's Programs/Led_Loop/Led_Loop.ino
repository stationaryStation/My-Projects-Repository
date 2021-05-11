//  Led_Loop by stationaryStation (Raul Perez)
void setup()
{
    pinMode(13, OUTPUT);
    for (int i = 0; i < 5; 1 + i)
    {
        tone(12, 262);
        delay(500);
        noTone(12);
        delay(500);
    }
    pinMode(13, INPUT);
}
void loop()
{
    
}
