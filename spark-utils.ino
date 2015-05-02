void blinkColor(int r, int g, int b, int count)
{
     for (int i; i < count; i++) {
        RGB.color(r, g, b);
        delay(600);
        RGB.color(0, 0, 0);
        delay(600);
     }
}

void ledStatus(int count, int delay)
{
    for (int j = 0; j <= count; j++)
    {
        digitalWrite(led, HIGH);
        delay(delay);
        digitalWrite(led, LOW);
        delay(delay); 
   }
}