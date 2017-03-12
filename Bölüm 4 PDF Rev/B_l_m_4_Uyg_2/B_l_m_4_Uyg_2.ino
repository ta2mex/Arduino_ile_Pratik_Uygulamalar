#include <Wire.h>  
#include <LiquidCrystal_I2C.h>
//                                adr, en,rw,rs,d4,d5,d6,d7,bl,blpol
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // I2C adres bilgisi
void setup()  
{
  lcd.begin(16,2); 
}
void loop()  
{
  lcd.clear();
  lcd.backlight();  
  lcd.setCursor(0,0);
  lcd.print("Facebook Grubu");
  lcd.setCursor(0,1);
  lcd.print("Arduino ve Pic"); 
  delay(500);
}
