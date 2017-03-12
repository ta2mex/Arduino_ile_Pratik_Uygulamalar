#include <LCD5110_Basic.h>
#include "DHT.h"
#define DHTPIN A0
#define DHTTYPE DHT11
int anDeg = A0;
DHT dht(DHTPIN, DHTTYPE);
LCD5110 myGLCD(8,9,10,11,12);
extern uint8_t SmallFont[];
extern uint8_t BigNumbers[];
void setup()
{
  pinMode(7,OUTPUT);
  myGLCD.InitLCD();
  myGLCD.setFont(SmallFont);
  dht.begin();
}
void loop()
{digitalWrite(7,HIGH);
float nem = dht.readHumidity();
float sicaklik = dht.readTemperature(); 
myGLCD.clrScr(); 
myGLCD.setFont(BigNumbers);
myGLCD.printNumF(sicaklik,1,12 ,18);
myGLCD.setFont(SmallFont);
myGLCD.print("C",72,27);
myGLCD.setFont(SmallFont);
myGLCD.print("o",70,22);
delay(5000);
myGLCD.clrScr(); 
myGLCD.setFont(BigNumbers);
myGLCD.printNumF(nem,1,20, 20);
myGLCD.setFont(SmallFont);
myGLCD.print("%",9,28);
delay(5000);  }
