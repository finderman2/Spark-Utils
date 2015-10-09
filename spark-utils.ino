//Spark Utilites - A batman style toolbelt of functions for your Spark Core
//Written by Liam O'Brien
//V1.0

void blinkColor(int r, int g, int b, int count, int delay = 600)
{
     for (int i; i <= count; i++) {
        RGB.color(r, g, b);
        delay(delay);
        RGB.color(0, 0, 0);
        delay(delay);
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