int yuksek = 12;
      int alcak = 10;
      int sensor = A0;
      void setup() {
        pinMode(yuksek, OUTPUT);
                         pinMode(alcak, OUTPUT);
}
      void loop() {
        int deger = analogRead(sensor);
        if(deger < 400)
                 {   digitalWrite(alcak, LOW);
                         digitalWrite(yuksek, HIGH);
}
      else {
        digitalWrite(alcak, HIGH);
        digitalWrite(yuksek, LOW);
} }
