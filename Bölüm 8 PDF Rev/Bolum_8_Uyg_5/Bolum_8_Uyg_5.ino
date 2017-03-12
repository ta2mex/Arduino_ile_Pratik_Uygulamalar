 #include<LiquidCrystal.h>  
#include <Servo.h>     
LiquidCrystal lcd(12,11,5,4,3,2); 
const int servo1 = 13;      
const int servo2 = 9;     
const int yonX = A0;
const int yonY = A1;
int servoDeger;
int servoDeger2;
Servo servomotor1;
Servo servomotor2;
void setup() {
lcd.begin(16,2);   
servomotor1.attach(servo1); 
servomotor2.attach(servo2); 
}
void loop() {
servoDeger= analogRead(yonX); 
servoDeger = map(servoDeger, 0, 1023, 0, 180);                              
servomotor1.write(servoDeger);             
servoDeger2= analogRead(yonY);            
servoDeger2 = map(servoDeger2, 0, 1023, 0, 180);                               
servomotor2.write(servoDeger2);                            
delay(10);
lcd.setCursor(0,0);        
lcd.print("Servo1 Derece:");   
lcd.print(servoDeger);
lcd.setCursor(0,1);
lcd.print("Servo2 Derece:");
lcd.print(servoDeger2);
delay(500);
lcd.clear();}
                

