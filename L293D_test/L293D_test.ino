// Tank DC Motors Test

// Experimenting with tracks DC motors

// Valerij Kozlov
// valiorik@gmail.com
// 2012

#include <AFMotor.h>

AF_DCMotor LeftMotor(3, MOTOR12_8KHZ);
AF_DCMotor RightMotor(2, MOTOR12_8KHZ);

void setup() {
  Serial.begin(9600);
  Serial.println("Starting..!");

  // Speed range 0 - 255 
  LeftMotor.setSpeed(255); 
  RightMotor.setSpeed(255);
}

void loop() {
  

  // forward
  Serial.println("bip forward");
  LeftMotor.run(FORWARD);
  RightMotor.run(FORWARD);
  delay(5000);
  
  // backwards
  Serial.println("bip backwards");
  LeftMotor.run(BACKWARD);
  RightMotor.run(BACKWARD);
  delay(5000);

  // stop
  Serial.println("bip stop");
  LeftMotor.run(RELEASE);      
  RightMotor.run(RELEASE);
  delay(5000);
}
