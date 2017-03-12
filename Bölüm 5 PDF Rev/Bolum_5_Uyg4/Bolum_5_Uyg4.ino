#include <Servo.h> 
int servo1 = 10; 
int servo2 = 9; 
int xPin = A1;
int yPin = A2;
int xPozisyonu = 0;
int yPozisyonu = 0;
int servoAyar;
int servoAyar2;
Servo servomotor1;
Servo servomotor2;
void setup() {
 pinMode(xPin, INPUT);
pinMode(yPin, INPUT);
servomotor1.attach(servo1);
servomotor2.attach(servo2);
}

void loop() {
servoAyar = analogRead(xPin);
servoAyar = map(servoAyar, 0, 1023, 0, 180); 
servomotor2.write(servoAyar);
servoAyar = analogRead(yPin);
servoAyar = map(servoAyar, 0, 1023, 70, 180); 
servomotor1.write(servoAyar);
delay(15);
}

