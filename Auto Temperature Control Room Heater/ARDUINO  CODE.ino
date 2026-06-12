#include <LiquidCrystal.h>
const int rs = 9, en = 8, d4 = 7, d5 = 6, d6 = 5, d7 = 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
 {
   pinMode(13,OUTPUT); //Set the Relay/Relay Pin as OUTPUT
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.setCursor(0,0);
  lcd.print("TEMP CONTROL");
  lcd.setCursor(0, 1);
  lcd.print("USING HEATER");
  digitalWrite(13,LOW);       
  delay(2000);
}

void loop() {
  float Sensor_Data = analogRead(A0);  // Read the input on Analog pin A0
  int Temp = (Sensor_Data*500)/1023; // Storing value in Degree Celsius
  lcd.setCursor(0,0);
  lcd.print("Temperature:");    //Do not display entered keys
  lcd.print(Temp);

  if(Temp < 20) //If Temperature is Greater Than 30'C
  {
    digitalWrite(13,HIGH);
    lcd.setCursor(0, 1);
    lcd.print("HEATER IS ON");  //Turn ON the Heater
  }
  else
  {
    digitalWrite(13,LOW);
    lcd.setCursor(0, 1);
    lcd.print("HEATER IS OFF");  //Turn OFF the Heater
  }
}
