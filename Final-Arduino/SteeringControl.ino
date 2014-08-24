#include "Wire.h"
#include "I2Cdev.h"
#include "MPU6050.h"
#include <Adafruit_NeoPixel.h>
#include "Stack.h"


MPU6050 mpu;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, 22, NEO_GRB + NEO_KHZ800);

int16_t ax, ay, az;
int16_t gx, gy, gz;

uint32_t standardColor = strip.Color(0, 200, 0);

int val;
int prevVal;

void setup() 
{
  strip.begin();
  strip.setBrightness(30);
  strip.show();
  
  Wire.begin();
  Serial.begin(9600);

  mpu.initialize();
  //Serial.println(mpu.testConnection() ? "Connected" : "Connection failed");


}

void loop() 
{
  setPixelAngle(280);
  delay(100);
}

void setPixelAngle(int angle){

  angle = angle/12; //6 degrees make 1 Pixel + /2 for both sides;
  int shift = 0;//getQuadrant();
  for(int i=0; i<60; i++){
    strip.setPixelColor(i, strip.Color(0,0,0));
  }
  for(int i=0; i<angle-shift; i++){
    strip.setPixelColor(i, standardColor);
  }
  for(int i=0; i<angle+shift; i++){
    strip.setPixelColor(59-i, standardColor);
  }
  strip.show();
  
}