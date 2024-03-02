#include <SPI.h>
#include <Adafruit_ST7735.h>
#include <Adafruit_GFX.h>

#define TFT_PIN_CS   10 // Arduino-Pin an Display CS   
#define TFT_PIN_DC   9  // Arduino-Pin an 
#define TFT_PIN_RST  8  // Arduino Reset-Pin
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_PIN_CS, TFT_PIN_DC, TFT_PIN_RST);  // ST7735-Bibliothek Setup
int a;
int b;
int c;
int d;
int e;
int f;
int g;
void setup() {
  // put your setup code here, to run once:
tft.initR(INITR_GREENTAB);
  // fillScreen(farbe);
  tft.fillScreen(ST7735_WHITE);
}
void loop(){
    // fillScreen(farbe);
  tft.fillScreen(ST7735_WHITE);
  g=1;
  for (b = 65;b<130;b=b+8){
      // fillScreen(farbe);
  tft.fillScreen(ST7735_WHITE);
   c=b+5;
   d=b+25;
   e=b+33;
   f=b+34;
  tft.fillCircle(64,c,30, ST7735_GREEN);
  tft.fillCircle(49,b,5, ST7735_BLACK);
  tft.fillCircle(80,b,5, ST7735_BLACK);
  tft.fillTriangle(81,d, 65,e, 65,f, ST7735_BLUE);
  tft.fillTriangle(49,d, 65,e, 65,f, ST7735_BLUE);
  }

  for (b = 130;b>90;b=b-8){
      // fillScreen(farbe);
  tft.fillScreen(ST7735_WHITE);
   c=b+5;
   d=b+25;
   e=b+33;
   f=b+34;
  tft.fillCircle(64,c,30, ST7735_GREEN);
  tft.fillCircle(49,b,5, ST7735_BLACK);
  tft.fillCircle(80,b,5, ST7735_BLACK);
  tft.fillTriangle(81,d, 65,e, 65,f, ST7735_BLUE);
  tft.fillTriangle(49,d, 65,e, 65,f, ST7735_BLUE);
  }  for (b = 90;b<130;b=b+8){
      // fillScreen(farbe);
  tft.fillScreen(ST7735_WHITE);
   c=b+5;
   d=b+25;
   e=b+33;
   f=b+34;
  tft.fillCircle(64,c,30, ST7735_GREEN);
  tft.fillCircle(49,b,5, ST7735_BLACK);
  tft.fillCircle(80,b,5, ST7735_BLACK);
  tft.fillTriangle(81,d, 65,e, 65,f, ST7735_BLUE);
  tft.fillTriangle(49,d, 65,e, 65,f, ST7735_BLUE);
  
  }  for (b = 130;b>65;b=b-8){
      // fillScreen(farbe);
  tft.fillScreen(ST7735_WHITE);
   c=b+5;
   d=b+25;
   e=b+33;
   f=b+34;
  tft.fillCircle(64,c,30, ST7735_GREEN);
  tft.fillCircle(49,b,5, ST7735_BLACK);
  tft.fillCircle(80,b,5, ST7735_BLACK);
  tft.fillTriangle(81,d, 65,e, 65,f, ST7735_BLUE);
  tft.fillTriangle(49,d, 65,e, 65,f, ST7735_BLUE);
  
  }
  // setCursor(von links,von oben);
  tft.setCursor(38,135);
  // setTextColor(farbe);
  tft.setTextColor(ST7735_RED);
  // print(text);
  tft.print("Arduino");
  while(g<4){
  for (a = 98;a>93;a--){
  tft.fillCircle(64,75,30, ST7735_GREEN);
  tft.fillCircle(49,65,5, ST7735_BLACK);
  tft.fillCircle(80,65,5, ST7735_BLACK);
  tft.fillTriangle(81,90, 65,a, 65,99, ST7735_BLUE);
  tft.fillTriangle(49,90, 65,a, 65,99, ST7735_BLUE);
delay(40);
}
for (a = 93;a<98;a++){
  tft.fillCircle(64,75,30, ST7735_GREEN);
  tft.fillCircle(49,65,5, ST7735_BLACK);
  tft.fillCircle(80,65,5, ST7735_BLACK);
  tft.fillTriangle(81,90, 65,a, 65,99, ST7735_BLUE);
  tft.fillTriangle(49,90, 65,a, 65,99, ST7735_BLUE); 
  delay(40); 
}
g++;
}
  // setCursor(von links,von oben);
  tft.setCursor(38,135);
  // setTextColor(farbe);
  tft.setTextColor(ST7735_RED);
  // print(text);
  tft.print("Arduino");

  // 5 Sekunden warten
  delay(5000);
}
