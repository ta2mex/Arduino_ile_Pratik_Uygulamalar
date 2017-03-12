int hm10veri;
int ARole=8;
int BRole=9;
void setup()
{
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
Serial.begin(9600); //Seri monitör aktif edilip 9600 baut hızına ayarlanıyor }
}
void loop()
//hm10veri isminde değişken oluşturuluyor
//ARole isminde değişken oluşturuluyor ve 8’e eşitleniyor //BRole isminde değişken oluşturuluyor ve 9’a eşitleniyor
//8. pin çıkış olarak ayarlanıyor.
//9. pin çıkış olarak ayarlanıyor.

 {
if(Serial.available())
//Eğer seri girişten veri gelmiş ise
{
int hm10veri = Serial.read();
//hm10veri değişkenine seri girişten gelen bilgiyi yaz.
delay(10);
Serial.print("Okunan Veri=");
//Seri monitör üzerinden okunan Veri kelimelerini yaz.
Serial.println(hm10veri);
//Seri monitör üzerinden “hm10veri” bilgisini yaz.
if(hm10veri==65)
//Eğer “hm10veri” bilgisi 65 ise
{digitalWrite(ARole,HIGH);
//ARolesini yani 8. pini HIGH yaparak aç.
Serial.println("A Rölesi Açık");}
//Seri monitöre “A Rölesi Açık” yaz
if(hm10veri==97)
//Eğer “hm10veri” bilgisi 97 ise
{digitalWrite(ARole,LOW);
//ARolesini yani 8. pini LOW yaparak kapat.
Serial.println("A Rölesi Kapalı");}
//Seri monitöre “A Rölesi Kapalı” yaz
if(hm10veri==66)
//Eğer “hm10veri” bilgisi 66 ise
{digitalWrite(BRole,HIGH);
//BRolesini yani 9. pini HIGH yaparak aç.
Serial.println("B Rölesi Açık");}
//Seri monitöre “B Rölesi Açık” yaz
if(hm10veri==98)
//Eğer “hm10veri” bilgisi 98 ise
{digitalWrite(BRole,LOW);
//BRolesini yani 9. pini LOW yaparak kapat.
Serial.println("B Rölesi Kapalı");}
//Seri monitöre “B Rölesi Kapalı” yaz
}
}
