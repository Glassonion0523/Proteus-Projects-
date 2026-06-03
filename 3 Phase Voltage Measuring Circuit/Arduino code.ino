// include the library code: 
#include <LiquidCrystal.h> //library for LCD 

// initialize the library with the numbers of the interface pins 
LiquidCrystal lcd(13, 12, 11, 10, 9, 8); 

#include "EmonLib.h"   // Include Emon Library
EnergyMonitor emon1;   // Create an instance
EnergyMonitor emon2;   // Create an instance
EnergyMonitor emon3;   // Create an instance

void setup()
{
  emon1.voltage(A0,187, 1.7); // Voltage: input pin, calibration, phase_shift
  emon2.voltage(A1,187, 1.7); // Voltage: input pin, calibration, phase_shift
  emon3.voltage(A2,187, 1.7); // Voltage: input pin, calibration, phase_shift

  lcd.begin(20, 4); // set up the LCD's number of columns and rows:
  lcd.setCursor(0,0);
  lcd.print("  3 PHASE VOLTAGE MEASUREMENT ");
  lcd.setCursor(0,1);
  lcd.print("   PHASE 1: ");  
  lcd.setCursor(0,2);
  lcd.print("   PHASE 2: ");
  lcd.setCursor(0,3);
  lcd.print("   PHASE 3: ");
}

void loop()
{
  //************ Measure Phase 1 Voltage ********************
  emon1.calcVI(20,2000); // Calculate all. No.of half wavelengths (crossings), time-out
  int Voltage1   = emon1.Vrms;  //extract Vrms into Variable
  
  lcd.setCursor(0,1);
  lcd.print("   PHASE 1: ");
  lcd.print(Voltage1);
  lcd.print("V   ");

  //************ Measure Phase 2 Voltage ********************
  emon2.calcVI(20,2000); // Calculate all. No.of half wavelengths (crossings), time-out
  int Voltage2   = emon2.Vrms;  //extract Vrms into Variable
  
  lcd.setCursor(0,2);
  lcd.print("   PHASE 2: ");
  lcd.print(Voltage2);
  lcd.print("V   ");

  //************ Measure Phase 3 Voltage ********************
  emon3.calcVI(20,2000); // Calculate all. No.of half wavelengths (crossings), time-out
  int Voltage3   = emon3.Vrms;  //extract Vrms into Variable
  
  lcd.setCursor(0,3);
  lcd.print("   PHASE 3: ");
  lcd.print(Voltage3);
  lcd.print("V   ");
}
