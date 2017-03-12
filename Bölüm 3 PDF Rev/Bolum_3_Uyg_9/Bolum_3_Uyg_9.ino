  #include<RFID.h>
     #include<SPI.h>
     RFID okuyucu(10,9);
     void setup()
     {
       Serial.begin(9600);
       SPI.begin();
       okuyucu.init();}
     void loop()
     {if(okuyucu.isCard())
     {
       if(okuyucu.readCardSerial())
       {
       Serial.print("Kart No;");
       Serial.print(okuyucu.serNum[0]);
       Serial.print(".");
       Serial.print(okuyucu.serNum[1]);
       Serial.print(".");
       Serial.print(okuyucu.serNum[2]);
       Serial.print(".");
       Serial.print(okuyucu.serNum[3]);
       Serial.print(".");
       Serial.println(okuyucu.serNum[4]);
       delay(1000);
       }
       okuyucu.halt();
       }}
