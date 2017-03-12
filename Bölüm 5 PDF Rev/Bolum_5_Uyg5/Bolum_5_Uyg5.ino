int sagPin = 9;
int solPin = 10;
int saga;
int sola;
void setup() {
}

void loop() {
  for( saga = 0 ; saga <= 255; saga +=5)  
  { 
analogWrite(sagPin, saga);                                     
delay(15);
}

for(saga = 255 ; saga >= 0; saga -=3) {
  analogWrite(sagPin, saga);                          
    delay(15);
}

for( sola = 0 ; sola <= 255; sola +=5) {
  analogWrite(solPin, sola);                                    
    delay(15);
}

for(sola = 255 ; sola >= 0; sola -=3) {
  analogWrite(solPin, sola);                          
    delay(15);
} }

