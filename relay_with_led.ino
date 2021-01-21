#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#define RELAY_PIN 4
#define NUMPIXELS 16 
#define PIN        13
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
#define DELAYVAL 500 

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
   pixels.begin(); //
  // put your setup code here, to run once:

}

void loop() {
 pixels.clear();
for(int i=0; i<NUMPIXELS; i++){
  digitalWrite(RELAY_PIN, LOW);
  delay(1000);
pixels.setPixelColor(i, pixels.Color(255, 0, 0));
pixels.show();
  digitalWrite(RELAY_PIN, HIGH);
  delay(1000);
  pixels.setPixelColor(i, pixels.Color(0, 255, 0));
pixels.show();
  
  // put your main code here, to run repeatedly:
}
}
