#include<LiquidCrystal.h>
#include <Servo.h>
LiquidCrystal lcd(12,11,5,4,3,2);
const int servo1 = 10;
const int yonX = A0;
int servoDeger;
Servo servomotor1;
void setup() {
lcd.begin(16,2);
servomotor1.attach(servo1);
}void loop() {
servoDeger= analogRead(yonX);
servoDeger = map(servoDeger, 0, 1023, 0, 180);
servomotor1.write(servoDeger);                              
delay(10);
lcd.setCursor(0,1); 
lcd.print("Servo Derece:");
lcd.print(servoDeger);
lcd.setCursor(0,0);
lcd.print("Arduino ve Pic ");
delay(500);
lcd.clear();}
