#include<calcFunctions.h>

#define trigPinLF 22
#define echoPinLF 23
#define trigPinLM 24
#define echoPinLM 25
#define trigPinLB 26
#define echoPinLB 27

#define trigPinRF 28
#define echoPinRF 29
#define trigPinRM 30
#define echoPinRM 31
#define trigPinRB 32
#define echoPinRB 33

#define DEBUG_MODE = 1;

void setup() {
  Serial.begin (9600);
  pinMode(trigPinLF, OUTPUT);
  pinMode(trigPinLM, OUTPUT);
  pinMode(trigPinLB, OUTPUT);
  pinMode(trigPinRF, OUTPUT);
  pinMode(trigPinRM, OUTPUT);
  pinMode(trigPinRB, OUTPUT);

  
  pinMode(echoPinLF, INPUT);
  pinMode(echoPinLM, INPUT);
  pinMode(echoPinLB, INPUT);
  pinMode(echoPinRF, INPUT);
  pinMode(echoPinRM, INPUT);
  pinMode(echoPinRB, INPUT);

}

int ping(int trigPin, int echoPin){
	int duration, distance;
	digitalWrite(trigPin, LOW);  // Added this line
	delayMicroseconds(2); // Added this line
	digitalWrite(trigPin, HIGH);
	delayMicroseconds(10); // Added this line
	digitalWrite(trigPin, LOW);
	duration = pulseIn(echoPin, HIGH);
	distance = ((duration)/2) / 29.1;

	if(0){
		Serial.println(distance);
		Serial.print(" cm ");
	}
	else{
		return distance;
	}
}

void loop() {
  	int LF = ping(trigPinLF, echoPinLF);
  	int LM = ping(trigPinLM, echoPinLM);
  	int LB = ping(trigPinLB, echoPinLB);
  	int RF = ping(trigPinRF, echoPinRF);
  	int RM = ping(trigPinRM, echoPinRM);
  	int RB = ping(trigPinRB, echoPinRB);
    
        getValidAngle('R', RF, RM, RB);
        


  delay(500);
}
