#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
const int ping_Pin = A1;
long dur, cm;

void setup(){
  lcd.begin(16, 2);
  lcd.print("PING Sensor");
}

void loop(){
  cm = read_sensor_ultrasonic();
  
  
  lcd.setCursor(0,1);
  lcd.print("Jarak");
  lcd.setCursor(6,1);
  lcd.print(cm);
  print_unit_cm(cm);
}