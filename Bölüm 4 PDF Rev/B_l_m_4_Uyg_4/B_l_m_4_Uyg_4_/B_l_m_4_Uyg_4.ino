#include "LedControl.h"
LedControl lc=LedControl(12,11,10,2); 
unsigned long delaySure=600;
byte karakterSeti1a[] =
{
B00011000, B00100100, B01000010, B10000001, B11111111, B10000001, B10000001, B10000001 };
byte karakterSeti1c[] =
{
B10000001, B10000001, B10000001, B11111111, B10000001, B01000010, B0010010, B00011000 };
byte karakterSeti2a[] =
{
B00000000, B00000000, B00000000, B00011000, B00011000, B00000000, B00000000, B00000000 };
byte karakterSeti2b[] =
{
B00000000, B00000000, B00111100, B00100100, B00100100, B00111100, B00000000, B00000000 };
byte karakterSeti2c[] =
{
B00000000, B01111110, B01000010, B01000010, B01000010, B01000010, B01111110, B00000000 };
byte karakterSeti2d[] =
{
B11111111, B10000001, B10000001, B10000001, B10000001, B10000001, B10000001, B11111111 };
void setup()
{
lc.shutdown(0,false); lc.shutdown(1,false); lc.setIntensity(0,2); lc.setIntensity(1,2); lc.clearDisplay(0); lc.clearDisplay(1);
}
void skarakterSeti1a()
{for (int i = 0; i < 8; i++)
{lc.setRow(0,i,karakterSeti1a[i]);} }
void skarakterSeti1c()
{for (int i = 0; i < 8; i++)
{lc.setRow(0,i,karakterSeti1c[i]);} }
void skarakterSeti2a()
{for (int i = 0; i < 8; i++)
{lc.setRow(1,i,karakterSeti2a[i]);} }
void skarakterSeti2b()
{for (int i = 0; i < 8; i++)
{lc.setRow(1,i,karakterSeti2b[i]);} }
void skarakterSeti2c()
{for (int i = 0; i < 8; i++)
{lc.setRow(1,i,karakterSeti2c[i]);} }
void skarakterSeti2d()
{for (int i = 0; i < 8; i++)
{lc.setRow(1,i,karakterSeti2d[i]);} }
void loop() {
skarakterSeti1a();delay(delaySure); 
skarakterSeti2a();delay(delaySure); 
skarakterSeti2b();delay(delaySure); 
skarakterSeti1c();delay(delaySure); 
skarakterSeti2c();delay(delaySure); 
skarakterSeti2d();delay(delaySure);
}
