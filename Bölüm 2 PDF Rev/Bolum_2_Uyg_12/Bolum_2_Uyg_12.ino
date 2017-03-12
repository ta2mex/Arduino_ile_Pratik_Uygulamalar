 int giris= A1;
       int girdeg = 0;
       void setup() {
         Serial.begin(9600);
       pinMode(giris, INPUT);
       }
       void loop() {
         girdeg = analogRead(giris);
       Serial.print("Giris Degeri: ");
       Serial.println(girdeg);
       delay(400);}
