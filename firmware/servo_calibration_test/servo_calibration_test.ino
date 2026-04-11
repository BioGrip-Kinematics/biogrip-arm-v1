/*
 * BIOGRIP KINEMATICS - Servo Calibration Utility
 * Warning: Disconnect artificial tendons before running this to prevent snapping!
 */

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

#define SERVOMIN  150 
#define SERVOMAX  600 

void setup() {
  Serial.begin(9600);
  Serial.println("BioGrip Servo Calibration Commencing...");
  pwm.begin();
  pwm.setPWMFreq(60);
}

void loop() {
  // Sweep all 5 channels from MIN to MAX
  Serial.println("Sweeping to MAX...");
  for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
    for (int i=0; i<5; i++) {
      pwm.setPWM(i, 0, pulselen);
    }
    delay(2);
  }
  delay(500);
  
  // Sweep all 5 channels from MAX back to MIN
  Serial.println("Sweeping to MIN...");
  for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
    for (int i=0; i<5; i++) {
      pwm.setPWM(i, 0, pulselen);
    }
    delay(2);
  }
  delay(500);
}
