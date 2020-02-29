#include <Adafruit_NeoPixel.h>
#define PIN 5     //Connect “NeoPixel data in” to pin 5 on the MicroController
#define NUMPIXELS 2   //In this example we have 2 NeoPixels connected
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_RGB + NEO_KHZ800);

void setup() 
{
  pixels.begin(); //This initializes the NeoPixel library
}

void loop() 
{
      //Set the NeoPixels to random colours;
    pixels.setPixelColor(0, pixels.Color(random(1,255),random(1,255),random(1,255))); 
    pixels.setPixelColor(1, pixels.Color(random(1,255),random(1,255),random(1,255))); 
    pixels.show();   //Write the new values to the NeoPixels 
    delay(500);      //Delay by 500mS so you can see the colour change 
}
