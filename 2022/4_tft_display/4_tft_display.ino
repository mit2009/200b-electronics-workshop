/*
  TFT Display - Display some text!
  2.00b Electronics Tutorial!
  
  The continuous servo will rotate one way for 
  2 seconds, then rotate the other way for 2 seconds.
  Questions?
  [Victor Hung](vhung@mit.edu)
*/

#include <Adafruit_GFX.h>           // Core graphics library
#include <Adafruit_ST7789.h>        // Hardware-specific library for ST7789
#include <Fonts/FreeSans9pt7b.h>    // for sans-serif font
#include <Adafruit_SPIFlash.h>      // SPI / QSPI flash library

#define TFT_CS        10
#define TFT_RST        9 
#define TFT_DC         8

Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

void setup(void) {
  tft.init(240, 240);               // Init ST7789 1.14" 135x240 TFT
}

// For library documentation, visit:
// https://learn.adafruit.com/adafruit-gfx-graphics-library

void loop() {
  tft.fillScreen(ST77XX_BLACK);
  delay(500);
  
  tft.fillScreen(ST77XX_RED);
  delay(500);
  
  tft.fillScreen(ST77XX_BLUE);
  tft.setTextColor(ST77XX_YELLOW);
  tft.setTextSize(5);
  tft.setCursor(0, 0);
  tft.println("Hello");
  tft.println("2.00b");
  delay(2000);
}
