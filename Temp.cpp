#include <LiquidCrystal.h>
int i = 0;
int sensor = A0;
float temp;
float tempc;
float tempf;

LiquidCrystal lcd (12, 11, 5, 4, 3, 2);

void setup () 
{
  lcd.begin (16, 2);
}  

void loop () 
{
temp=analogRead(sensor);
tempc=(temp*5)/10;
tempf=(tempc*1.8)+32;
lcd.setCursor(0,0);
lcd.print("Temp in C = ");
lcd.println(tempc);
lcd.setCursor(0,1);
lcd.print("Temp in F = ");
lcd.println(tempf);
}
