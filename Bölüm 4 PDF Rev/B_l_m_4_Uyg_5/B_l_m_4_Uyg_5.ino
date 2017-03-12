 #include <LCD5110_Basic.h>
       LCD5110 myGLCD(8,9,10,11,12);
       extern uint8_t SmallFont[];
       void setup()
       {
         pinMode(7,OUTPUT);
         myGLCD.InitLCD();
           myGLCD.setFont(SmallFont);
}
void loop()
{digitalWrite(7,HIGH);
  myGLCD.clrScr();
  myGLCD.print(" FacebookGrup", LEFT, 0);
  myGLCD.print("ARDUINO", CENTER, 16);
  myGLCD.print("VE PIC", CENTER, 24);
  delay (5000);
  myGLCD.clrScr();
  myGLCD.print("Arduino ve Pic", LEFT, 0);
  myGLCD.print("Grubunda sizi de", CENTER, 16);
   myGLCD.print("Gormek isteriz", CENTER, 32);
  delay (5000);
}
