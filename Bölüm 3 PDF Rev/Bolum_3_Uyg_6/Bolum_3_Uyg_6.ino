int deger;
 int pirPin = 8;
     void setup() {
       Serial.begin(9600);
     }
     void loop() {
       deger = digitalRead(pirPin);
     if (deger == LOW) {
     Serial.println("Hareket Yok");
     }
     else {
       Serial.println("Hareket Var!");
     }
     delay(1000);
     }
