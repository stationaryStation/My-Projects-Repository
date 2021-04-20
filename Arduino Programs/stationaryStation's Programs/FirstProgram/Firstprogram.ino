// Code by Raúl "Station" Pérez at 1:38 pm AST on April 13 2021. Platform: VSCode/PlatformIO 
// More of this projects are available at www.github.com/stationaryStation/My-Projects-Repository/ (You need to clone with git via the following command: git clone https://github.com/stationaryStation/arduinoProjects.git)
// Shared with the Live Share Extension @ Visual Studio Code
void setup()
{
    pinMode(13,OUTPUT); //Activates the pin D13 to Output

}
// The function above runs when the code starts and it doesn't run afterwards.
void loop()
{
    digitalWrite(13, HIGH); // Turns on the L indicator on the Arduino Nano
    delay (125); // Waits 125ms or 1/2 of a second
    digitalWrite(13, LOW); // Turns off the L indicator on the Arduino Nano
    delay (500); //Waits 125ms or 1/2 of a second
    digitalWrite(13, HIGH);
    delay (125);
    digitalWrite(13, LOW);
    delay (500);
    digitalWrite(13, HIGH);
    delay (700);
    digitalWrite(13, LOW);
    delay (500);
    digitalWrite(13, HIGH);
    delay (700);
    digitalWrite(13, LOW);
    delay (500);
    digitalWrite(13, HIGH);
    delay (700);
    digitalWrite(13, LOW);
    delay (1500);

}
// This function runs indefinitely until the break function is called. 
// Morse code that I need to make with the L indicator
// ...---... (SOS on Morse code)