#include <LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);

void setup () 
{
lcd.begin(16,2);
lcd.print("Temperature:");
}

void loop() {
float c = analogRead(A0);
c = (c*5)/1023;
c = c*100;
float f = (c*9)/5 + 32;
lcd.setCursor(0,1);
lcd.print(c);
lcd.print((char)223);
lcd.print("C");
lcd.print("(");
lcd.print(f);
lcd.print((char)223);
lcd.print("F)");
}