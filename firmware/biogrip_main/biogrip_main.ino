
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// Initialize the I2C PWM servo driver
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

// MG996R Servo pulse length constraints (Adjust these during calibration)
#define SERVOMIN  150 // Minimum pulse length count
#define SERVOMAX  600 // Maximum pulse length count

// Flex Sensor Analog Pins
const int flexPins[5] = {A0, A1, A2, A3, A4};
int flexValues[5];
int servoPositions[5];

void setup() {
  Serial.begin(9600);
  pwm.begin();
  pwm.setPWMFreq(60); // Analog servos typically run at ~60 Hz
  delay(10);
}

void loop() {
  // Loop through all 5 fingers
  for (int i = 0; i < 5; i++) {
    // 1. Read the flex sensor
    flexValues[i] = analogRead(flexPins[i]);
    
    // 2. Map the analog reading to the servo pulse length
    // NOTE: 800 and 1000 are placeholder limits. You MUST calibrate these 
    // numbers based on the actual max/min bend resistance of your specific flex sensors.
    servoPositions[i] = map(flexValues[i], 800, 1000, SERVOMIN, SERVOMAX);
    
    // 3. Constrain values to prevent servo damage
    servoPositions[i] = constrain(servoPositions[i], SERVOMIN, SERVOMAX);
    
    // 4. Drive the specific servo channel (Channels 0 to 4 on the PCA9685)
    pwm.setPWM(i, 0, servoPositions[i]);
  }
  
  // A small delay to stabilize the I2C bus and motor jitters
  delay(50);
}
