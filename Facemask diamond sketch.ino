#include <FastLED.h>

#define NUM_LEDS 84
#define LED_PIN 7

CRGB led[NUM_LEDS];

void setup()
{
  FastLED.addLeds<NEOPIXEL, LED_PIN>(led, NUM_LEDS);
  FastLED.show();
  FastLED.setBrightness(5);
}

void loop()
{
    //center
    led[40] = CRGB (255, 255, 255);
    FastLED.show();
    delay(500);
    FastLED.clear();
    
    //1st layer
    led[29] = CRGB (255, 255, 255);
    led[39] = CRGB (255, 255, 255);
    led[41] = CRGB (255, 255, 255);
    led[53] = CRGB (255, 255, 255);
    FastLED.show();
    delay(500);
    FastLED.clear();

    //2nd layer
    led[16] = CRGB (255, 255, 255);
    led[28] = CRGB (255, 255, 255);
    led[30] = CRGB (255, 255, 255);
    led[38] = CRGB (255, 255, 255);
    led[42] = CRGB (255, 255, 255);
    led[52] = CRGB (255, 255, 255);
    led[54] = CRGB (255, 255, 255);
    led[64] = CRGB (255, 255, 255);
        //show center as well
        led[40] = CRGB (255, 255, 255);
    FastLED.show();
    delay(500);
    FastLED.clear();

    //3rd layer
    led[5] = CRGB (255, 255, 255);
    led[15] = CRGB (255, 255, 255);
    led[17] = CRGB (255, 255, 255);
    led[27] = CRGB (255, 255, 255);
    led[31] = CRGB (255, 255, 255);
    led[37] = CRGB (255, 255, 255);
    led[43] = CRGB (255, 255, 255);
    led[51] = CRGB (255, 255, 255);
    led[55] = CRGB (255, 255, 255);
    led[63] = CRGB (255, 255, 255);
    led[65] = CRGB (255, 255, 255);
    led[77] = CRGB (255, 255, 255);
        //show 1st layer as well
        led[29] = CRGB (255, 255, 255);
        led[39] = CRGB (255, 255, 255);
        led[41] = CRGB (255, 255, 255);
        led[53] = CRGB (255, 255, 255);

    FastLED.show();
    delay(500);
    FastLED.clear();

    //4th layer
    led[4] = CRGB (255, 255, 255);
    led[6] = CRGB (255, 255, 255);
    led[14] = CRGB (255, 255, 255);
    led[18] = CRGB (255, 255, 255);
    led[26] = CRGB (255, 255, 255);
    led[32] = CRGB (255, 255, 255);
    led[36] = CRGB (255, 255, 255);
    led[44] = CRGB (255, 255, 255);
    led[50] = CRGB (255, 255, 255);
    led[56] = CRGB (255, 255, 255);
    led[62] = CRGB (255, 255, 255);
    led[66] = CRGB (255, 255, 255);
    led[76] = CRGB (255, 255, 255);
    led[78] = CRGB (255, 255, 255);
        //show 2nd layer as well
        led[16] = CRGB (255, 255, 255);
        led[28] = CRGB (255, 255, 255);
        led[30] = CRGB (255, 255, 255);
        led[38] = CRGB (255, 255, 255);
        led[42] = CRGB (255, 255, 255);
        led[52] = CRGB (255, 255, 255);
        led[54] = CRGB (255, 255, 255);
        led[64] = CRGB (255, 255, 255);
    FastLED.show();
    delay(500);
    FastLED.clear();

   //5th layer
   led[3] = CRGB (255, 255, 255);
   led[7] = CRGB (255, 255, 255);
   led[13] = CRGB (255, 255, 255);
   led[19] = CRGB (255, 255, 255);
   led[25] = CRGB (255, 255, 255);
   led[33] = CRGB (255, 255, 255);
   led[35] = CRGB (255, 255, 255);
   led[45] = CRGB (255, 255, 255);
   led[49] = CRGB (255, 255, 255);
   led[57] = CRGB (255, 255, 255);
   led[61] = CRGB (255, 255, 255);
   led[67] = CRGB (255, 255, 255);
   led[75] = CRGB (255, 255, 255);
   led[79] = CRGB (255, 255, 255);
      //show 3rd layer as well
      led[5] = CRGB (255, 255, 255);
      led[15] = CRGB (255, 255, 255);
      led[17] = CRGB (255, 255, 255);
      led[27] = CRGB (255, 255, 255);
      led[31] = CRGB (255, 255, 255);
      led[37] = CRGB (255, 255, 255);
      led[43] = CRGB (255, 255, 255);
      led[51] = CRGB (255, 255, 255);
      led[55] = CRGB (255, 255, 255);
      led[63] = CRGB (255, 255, 255);
      led[65] = CRGB (255, 255, 255);
      led[77] = CRGB (255, 255, 255);
          //show center as well
          led[40] = CRGB (255, 255, 255);
  FastLED.show();
  delay(500);
  FastLED.clear();

}
