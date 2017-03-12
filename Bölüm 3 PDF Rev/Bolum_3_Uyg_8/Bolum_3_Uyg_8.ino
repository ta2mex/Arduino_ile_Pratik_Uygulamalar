#include "IRremote.h"
       int receiver = 11;
       IRrecv irrecv(receiver);
       decode_results results;
       void setup() {
         Serial.begin(9600);
         Serial.println("IR Buton Sinyali");
         irrecv.enableIRIn();
}
       void loop() {
         if (irrecv.decode(&results))
          {
           translateIR();
           irrecv.resume();
}}
void translateIR() {
         switch(results.value)
          {
         case 0xFD8877: Serial.println(" YUKARİ");break;
         case 0xFD28D7: Serial.println(" SOL ");break;
         case 0xFDA857: Serial.println(" TAMAM ");break;
         case 0xFD6897: Serial.println(" SAG");break;
         case 0xFD9867: Serial.println(" ASAGİ ");break;
         case 0xFD00FF: Serial.println(" 1");break;
         case 0xFD807F: Serial.println(" 2");break;
         case 0xFD40BF: Serial.println(" 3");break;
         case 0xFD20DF: Serial.println(" 4");break;
         case 0xFDA05F: Serial.println(" 5");break;
         case 0xFD609F: Serial.println(" 6");break;
          case 0xFD10EF: Serial.println(" 7");break;
  case 0xFD906F: Serial.println(" 8");break;
  case 0xFD50AF: Serial.println(" 9");break;
  case 0xFD30CF: Serial.println(" *");break;
  case 0xFDB04F: Serial.println(" 0");break;
  case 0xFD708F: Serial.println(" #");break;
  case 0xFFFFFFFF: Serial.println(" TEKRAR ");break;
  default: Serial.println(" YANLIS ALGILAMA  ");
}
delay(500);
}
