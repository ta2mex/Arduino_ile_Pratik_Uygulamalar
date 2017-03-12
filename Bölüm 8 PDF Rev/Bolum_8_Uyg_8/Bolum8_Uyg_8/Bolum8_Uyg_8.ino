#include "U8glib.h"         
#include "DHT.h"          
#define DHTPIN 7          
#define DHTTYPE DHT22                 
DHT dht(DHTPIN, DHTTYPE);   
U8GLIB_ST7920_128X64_4X u8g(10);  
/* Kütüphane dosyaları, kullanılan işlemcinin
 *  belirlendiği kısım */
   void draw1(void)       
{
  u8g.setFont(u8g_font_unifont);    
//u8g.setFont(u8g_font_osb21);    
  u8g.drawStr( 0, 12,  "DHT22 ISI VE NEM"); 
  u8g.drawStr( 0, 24,  "Kutuphane Dosyasi" ); 
  u8g.drawStr( 0, 36,  "Arduino ve Pic"); 
  u8g.drawStr( 0, 48,  "Grubu U8glib.h  "); 
  u8g.drawStr( 0, 60,  "Isimli Dosya    "); 
  }
/* draw1 isminde bir alt dosya oluşturuluyor.
Kullanılacak karakter ve yazılacak metinler
satır süsun olarak belirleniyor.*/
void draw(void) {       
  delay(200);                         
float h = dht.readHumidity();       
float t = dht.readTemperature();   
if (isnan(h) || isnan(t))         
{     
Serial.println("Veri okunamadi!");   
return;
} 
/* draw isminde bir alt dosya oluşturuluyor.
DHT22 sensöründen gelen nem ve sıcaklı değeri
okunuyor. Ayrıca (h) ve (t) bilgilerinin gelip
gelmediği kontrol ediliyor.*/

 u8g.setFont(u8g_font_unifont);     
  u8g.drawStr( 0, 12,  "DHT22 ISI VE NEM"); 
  u8g.drawStr( 0, 24 , "ORTAM ISI DEGERi : "); 
  u8g.setPrintPos(0, 38);       
  u8g.print(t);        
  u8g.drawStr( 0, 49, "ORTAM NEM DEGERi : "); 
  u8g.setPrintPos(0, 60);     
  u8g.print(h);        
}
/* DHT22 sensöründen gelen veri satır sütun
sayıları girilerek ekrana aktarılır..*/
void setup(void) 
{
Serial.begin(9600);
dht.begin();
/*   
 *    Eğer elimizde renkli bir LCD olsaydı burda
 *    bulunan proram satırlarını da kullaanıyor olacaktık.
 *    Ancak elimizde tek rek LCD olduğundan bu bölümdeki 
 *    komutları kullanmıyorumz.
  assign default color value            
   if ( u8g.getMode() == U8G_MODE_R3G3B2 ) {    
   u8g.setColorIndex(255);              
  }
    else if ( u8g.getMode() == U8G_MODE_GRAY2BIT ) {  
     u8g.setColorIndex(3);                 
   }
   else if ( u8g.getMode() == U8G_MODE_BW ) {    
     u8g.setColorIndex(1);                   
   }
   else if ( u8g.getMode() == U8G_MODE_HICOLOR ) { 
     u8g.setHiColorByRGB(255,255,255);
    }
*/
}
void loop(void) { 
u8g.firstPage();      
  do {                
    draw();           
  } while( u8g.nextPage() );  
  delay(3500);      
        
  u8g.firstPage();    
  do {  
  draw1();    
   } while( u8g.nextPage() );
  delay(1500); 
 /* draw ve draw1 isimli alt dosyalar belirli 
 aralıklarla çağrılır. Ekransa görüntü oluşturulur.*/
}
