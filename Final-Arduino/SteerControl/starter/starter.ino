#include "Wire.h"
#include "I2Cdev.h"
#include "MPU6050.h"
#include <Adafruit_NeoPixel.h>


MPU6050 mpu;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, 22, NEO_GRB + NEO_KHZ800);

int16_t ax, ay, az;
int16_t gx, gy, gz;

uint32_t standardColor = strip.Color(0, 200, 0);

int val;
int prevVal;

int masterArray[200] = {0};
static int MODE = 0;

void setup() 
{
  strip.begin();
  strip.setBrightness(30);
  strip.show();
  
  Wire.begin();
  Serial.begin(9600);

  mpu.initialize();
  Serial.println(mpu.testConnection() ? "Connected" : "Connection failed");

}

void loop() 
{
  //int requiredAngle = 90;
   int angle;
  int shift = getShift();  
  if(shift < 30){
    angle = 270;
    standardColor = strip.Color(0, 0, 200);
    setArrayForAngleLeft(angle);
    drawMaskOnPixelLeft();
  }
  else{
    //right mode
    angle = 270;
    standardColor = strip.Color(0, 200, 0);
    setArrayForAngleRight(angle);
    drawMaskOnPixelRight();
  }
  
  
  


  delay(100);
}

void setArrayForAngleRight(int angle){
  angle = angle/6;
  for (int i=100; i<100+angle; i++){
      masterArray[i] = 1;
  }
}

void setArrayForAngleLeft(int angle){
  angle = angle/6;
  for (int i=99; i>99-angle; i--){
      masterArray[i] = 1;
  }
}


void drawMaskOnPixelRight(){
  int shift = getShift();

  for(int i=0; i<60; i++){
    uint32_t color = strip.Color(0,0,0);
    //Serial.println(masterArray[100+shift+i]);
    if(masterArray[70+shift+i]){
      color = standardColor;
    }
    strip.setPixelColor(i, color);
  }
  strip.show();

}

void drawMaskOnPixelLeft(){
  int shift = getShift();

  for(int i=0; i<60; i++){
    uint32_t color = strip.Color(0,0,0);
    //Serial.println(masterArray[100+shift+i]);
    if(masterArray[69+shift-i]){
      color = standardColor;
    }
    strip.setPixelColor(59-i, color);
  }
  Serial.println(shift);
  strip.show();

}




/*
void setPixelAngle(int angle){

  angle = angle/12; //6 degrees make 1 Pixel + /2 for both sides;
  int shift = getShift();
  for(int i=0; i<60; i++){
    strip.setPixelColor(i, strip.Color(0,0,0));
  }


  //Serial.println(shift);

  for(int i=(shift-angle); i<angle-shift; i++){
    strip.setPixelColor(i, standardColor);
  }
  for(int i=(shift-angle); i<angle+shift; i++){
    strip.setPixelColor(59-i, standardColor);
  }
  strip.show();
  
}*/


int getShift(){
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
  int xVal;
  int yVal;

  val = map(ax, -17000, 17000, 0, 179);
  if (val != prevVal)
  {
        //Serial.println(90-val);
        prevVal = 90-val;
        xVal = 90-val;
      }
      val = map(ay, -17000, 17000, 0, 179);
      if (val != prevVal)
      {
        //Serial.println(val-90);
        prevVal = val-90;
        yVal = val-90;
      }
      int shift = 0;

      if(xVal >= 0 && xVal <= 90){
       if(yVal >= 0){
       //I
       shift = (xVal/6)+30;
     } 
     else{
       //IV
       shift  = ((-yVal/6)+15)+30;
     }
   }
   else if(xVal < 0 && xVal > -90){
     if(yVal >= 0){
       //II
       shift = (xVal/6) + 30;
     } 
     else{
       //III
       shift = 30+((yVal/6)-15);
     }
   }
  //Serial.println(shift);
   return shift;

 }

//Stack Implementation
