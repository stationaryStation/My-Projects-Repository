//nameMorse by stationaryStation
//More projects like this on https://github.com/stationarystation/
//Ps: You will need to use VSCode with plataformIO for editing and running the program
void setup()
{
    pinMode(13, OUTPUT); //Activates the pin D13 as Output
}

// morse code: .-. .- ..- .-..
void loop()
{
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500)
}