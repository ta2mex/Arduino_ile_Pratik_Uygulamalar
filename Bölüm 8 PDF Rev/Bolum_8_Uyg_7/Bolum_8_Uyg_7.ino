#include <Wire.h>        
#include <LCD5110_Basic.h>      
#define DS3231_I2C_ADDRESS 104    
LCD5110 myGLCD(8,9,10,11,12);   
extern uint8_t SmallFont[];    
extern uint8_t BigNumbers[];    
byte seconds, minutes, hours, day, date, month, year; 
char weekDay[4];           
byte tMSB, tLSB;       
float temp3231;       
void setup()
{
  Wire.begin();       
  Serial.begin(9600);     
  myGLCD.InitLCD();     
  myGLCD.setFont(SmallFont);    
  }
void loop()
{watchConsole();          
  get3231Date();         
  
      myGLCD.clrScr();           
      myGLCD.print(weekDay, LEFT, 0);     
      myGLCD.printNumF(get3231Temp(),1,58 ,0);  
      delay(1);          
      myGLCD.printNumF(date,3,44 ,18);   
      myGLCD.printNumF(month,3,56 ,18);
      myGLCD.printNumF(year,3,72 ,18);
      myGLCD.print("TARIH ", LEFT, 18);
      myGLCD.printNumF(hours,3,41 ,36);
      myGLCD.printNumF(minutes,3,56 ,36);
      myGLCD.printNumF(seconds,3,72 ,36);
      myGLCD.print("SAAT ", LEFT, 36);
      delay(100);
  
  Serial.print(weekDay);      
  Serial.print(", ");         
  Serial.print(date, DEC); 
  Serial.print("/"); 
  Serial.print(month, DEC); 
  Serial.print("/"); 
  Serial.print(year, DEC); 
  Serial.print(" - ");
  Serial.print(hours, DEC); 
  Serial.print(":"); 
  Serial.print(minutes, DEC); 
  Serial.print(":"); 
  Serial.print(seconds, DEC);
  Serial.print(" - Temp: "); 
  Serial.println(get3231Temp());
  delay(1000);
}
byte decToBcd(byte val)   

{
  return ( (val/10*16) + (val%10) );
}
 void watchConsole()
{
  if (Serial.available()) {         
    if (Serial.read() == 84) {          
      set3231Date();      //
      get3231Date();      
      Serial.println(" ");
    }}}
  void set3231Date()
{

seconds = (byte) ((Serial.read() - 48) * 10 + (Serial.read() - 48)); 
  minutes = (byte) ((Serial.read() - 48) *10 +  (Serial.read() - 48));
  hours   = (byte) ((Serial.read() - 48) *10 +  (Serial.read() - 48));
  day     = (byte) (Serial.read() - 48);
  date    = (byte) ((Serial.read() - 48) *10 +  (Serial.read() - 48));
  month   = (byte) ((Serial.read() - 48) *10 +  (Serial.read() - 48));
  year    = (byte) ((Serial.read() - 48) *10 +  (Serial.read() - 48));
  Wire.beginTransmission(DS3231_I2C_ADDRESS); 
  Wire.write(0x00);         
  Wire.write(decToBcd(seconds));
  Wire.write(decToBcd(minutes));
  Wire.write(decToBcd(hours));
  Wire.write(decToBcd(day));
  Wire.write(decToBcd(date));
  Wire.write(decToBcd(month));
  Wire.write(decToBcd(year));
  Wire.endTransmission();
}
void get3231Date()
{
  Wire.beginTransmission(DS3231_I2C_ADDRESS);  
  Wire.write(0x00);           
  Wire.endTransmission();      
  Wire.requestFrom(DS3231_I2C_ADDRESS, 7);
  if(Wire.available()) {
    seconds = Wire.read();     
    minutes = Wire.read();    
    hours   = Wire.read();      
    day     = Wire.read();      
    date    = Wire.read();      
    month   = Wire.read();    
    year    = Wire.read();     
        
seconds= (((seconds & B11110000)>>4)*10 + (seconds & B00001111)); 
minutes= (((minutes & B11110000)>>4)*10 + (minutes & B00001111)); 
hours   = (((hours & B00110000)>>4)*10 + (hours & B00001111));    
day     = (day & B00000111);            
date    = (((date & B00110000)>>4)*10 + (date & B00001111));      //
month   = (((month & B00010000)>>4)*10 + (month & B00001111)); 
year    = (((year & B11110000)>>4)*10 + (year & B00001111));
  }
  else {
  }  
  switch (day) {
    case 1:
      strcpy(weekDay, "Pazar");break;    
  case 2:       
      strcpy(weekDay, "Pzrts.");break;  
    case 3:       
      strcpy(weekDay, "Salı");break;  
    case 4:
      strcpy(weekDay, "Çrş.");break;
    case 5:
      strcpy(weekDay, "Prş.");break;
    case 6:
      strcpy(weekDay, "Cuma");break;
    case 7:
      strcpy(weekDay, "Cumartesi");break;
  }
}
float get3231Temp()           
{
  Wire.beginTransmission(DS3231_I2C_ADDRESS);    
  Wire.write(0x11);           
  Wire.endTransmission();        
  Wire.requestFrom(DS3231_I2C_ADDRESS, 2); 
  if(Wire.available()) {
    tMSB = Wire.read(); 
    tLSB = Wire.read(); 
    
    temp3231 = (tMSB & B01111111); 
    temp3231 += ( (tLSB >> 6) * 0.25 );       
  }
  else {
  }    
  return temp3231;
}

