   #include <RFID.h>
       #include <SPI.h>
       const byte izinsiz = 5;
       const byte izinli = 4;
       RFID okuyucu(10,9);
       byte tag[5] = {204,117,112,206,7};
       boolean izin = true;
       void setup()
       {
         Serial.begin(9600);
         SPI.begin();
         okuyucu.init();
         pinMode(izinsiz, OUTPUT);
         pinMode(izinli, OUTPUT);
       }
       void loop()
       {
         izin=true;
         if(okuyucu.isCard())
         {
           if(okuyucu.readCardSerial())
           {
             Serial.print("tag bulundu ID: ");
             Serial.print(okuyucu.serNum[0]);
             Serial.print(",");
             Serial.print(okuyucu.serNum[1]);
    Serial.print(",");
    Serial.print(okuyucu.serNum[2]);
    Serial.print(",");
    Serial.print(okuyucu.serNum[3]);
    Serial.print(",");
    Serial.println(okuyucu.serNum[4]);
  }
  for(int i=0; i<5; i++)
  {
    if(okuyucu.serNum[i] != tag[i])
    {
      izin = false;
    }
  }
  if(izin==true)
  {
    Serial.println("izin Var");
    digitalWrite(izinli, HIGH);
    delay(1000);
    digitalWrite(izinli, LOW);
} else {
   Serial.println("izin Yok");
   digitalWrite(izinsiz, HIGH);
   delay(1000);
   digitalWrite(izinsiz, LOW);
}
  okuyucu.halt();
}}
