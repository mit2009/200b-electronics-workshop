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
  // Set the first LED in the chain
	leds[0] = CRGB(200, 0, 0);
	FastLED.show(); 
  delay(1000);

  // Set LED #2
  leds[1] = CRGB(0, 200, 0);
  FastLED.show(); 
  delay(1000);

  // Clear the LEDs. Remember, we still need to 'activate'
  // it by calling 'show'!
  FastLED.clear();
  FastLED.show();
  delay(1000);
}
