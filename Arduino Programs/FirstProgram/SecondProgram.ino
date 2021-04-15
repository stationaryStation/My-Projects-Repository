void setup()
{
    pinMode(13,OUTPUT);
}

void loop()
{
    digitalWrite(13, HIGH);
    delay(0.1);
    digitalWrite(13,LOW);
}
//Remember, This loop will make the Led "L" make the cpu is higher than ever. Is better not run youself.