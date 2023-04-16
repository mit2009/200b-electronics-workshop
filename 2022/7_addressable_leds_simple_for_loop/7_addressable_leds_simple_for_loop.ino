/*
  Individually Addressable LED Strips
  2.00b Electronics Tutorial!
  
  Let's do an LED thing!
  Questions?
  [Victor Hung](vhung@mit.edu)
*/

#include <FastLED.h>

/*
 * Full documentation can be found here:
 * https://github.com/FastLED/FastLED/wiki/
 */

// How many leds in your strip?
#define NUM_LEDS 64 

// What's the DATA PIN? (Usually the green wire)
#define DATA_PIN 6

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() { 
	FastLED.addLeds<WS2812,DATA_PIN,RGB>(leds,NUM_LEDS);
	FastLED.setBrightness(80);
}

void loop() { 
  // First tower segment
  for (int i = 0; i < 6; i ++) {
	  leds[i] = CRGB(200, 0, 0);
  }
	FastLED.show(); 
  delay(1000);

  // Second tower segment
  for (int i = 6; i < 11; i ++) {
    leds[i] = CRGB(0, 200, 0);
  }
  FastLED.show(); 
  delay(1000);

  // Third tower segment
  for (int i = 11; i < 19; i ++) {
    leds[i] = CRGB(200, 200, 200);
  }
  FastLED.show(); 
  delay(1000);

  FastLED.clear();
  FastLED.show();
  delay(1000);

}
