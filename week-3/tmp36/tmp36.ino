#include <LiquidCrystal.h>
int tempPIN = A1;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  // pins for RS, E, DB4, DB5, DB6, DB7

void setup(){
  lcd.begin(16, 2);
  lcd.clear();
  pinMode(tempPIN, INPUT);
  analogReference(EXTERNAL);
  Serial.begin(9600);
}

void loop(){
  lcd.clear();
  // take pin value of 0-1024 use it to divide voltage in mA (3300).
  // Subtract 500 and devide by 10 which is an offset provided by the sensor
  // * 1.8 + 32 to convert from celcius to fahrenheit.
  int temp = ((analogRead(tempPIN)*(3300/1024)-500)/10) * 1.8 +32;
  Serial.println(temp);
  lcd.print(temp);
  delay(100);
}
