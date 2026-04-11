// ==========================================
// BIOGRIP KINEMATICS - FIRMWARE CONFIGURATION
// ==========================================

#ifndef CONFIG_H
#define CONFIG_H

// --- SERVO LIMITS (PCA9685) ---
// Calibrate these values based on your specific MG996R motors
#define SERVOMIN  150  // Minimum pulse length count (0 degrees)
#define SERVOMAX  600  // Maximum pulse length count (180 degrees)
#define SERVO_FREQ 60  // Analog servos run at ~60 Hz

// --- FLEX SENSOR PIN MAPPING ---
// Connect flex sensor voltage dividers to these analog pins
const int THUMB_PIN  = A0;
const int INDEX_PIN  = A1;
const int MIDDLE_PIN = A2;
const int RING_PIN   = A3;
const int PINKY_PIN  = A4;

// Array for easy iteration in the main loop
const int flexPins[5] = {THUMB_PIN, INDEX_PIN, MIDDLE_PIN, RING_PIN, PINKY_PIN};

// --- FLEX SENSOR CALIBRATION ---
// Min and Max analog readings from the flex sensors (0-1023)
// Adjust these after testing the user's grip range
const int FLEX_MIN = 800;  // Flat hand
const int FLEX_MAX = 1000; // Fully bent fingers

#endif
