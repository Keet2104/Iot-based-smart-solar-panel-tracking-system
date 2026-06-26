/*
=========================================================
 IoT-Based Smart Solar Panel Tracking System
 Author : Sucharita
 Board  : Arduino Uno
=========================================================
*/

#include <Servo.h>

// ---------------- PIN DEFINITIONS ----------------

Servo solarServo;

const int LDR_LEFT  = A0;
const int LDR_RIGHT = A1;

const int SERVO_PIN = 9;

// Initial servo position
int servoAngle = 90;

// Difference required before moving servo
const int threshold = 50;

void setup()
{
  Serial.begin(9600);

  solarServo.attach(SERVO_PIN);
  solarServo.write(servoAngle);

  pinMode(LDR_LEFT, INPUT);
  pinMode(LDR_RIGHT, INPUT);

  Serial.println("=================================");
  Serial.println(" Smart Solar Tracking System");
  Serial.println("=================================");
}

void loop()
{
  int leftValue = analogRead(LDR_LEFT);
  int rightValue = analogRead(LDR_RIGHT);

  Serial.print("Left LDR : ");
  Serial.print(leftValue);

  Serial.print("    Right LDR : ");
  Serial.println(rightValue);

  int difference = leftValue - rightValue;

  // Move Left
  if (difference > threshold)
  {
    servoAngle--;

    if (servoAngle < 0)
      servoAngle = 0;

    solarServo.write(servoAngle);
  }

  // Move Right
  else if (difference < -threshold)
  {
    servoAngle++;

    if (servoAngle > 180)
      servoAngle = 180;

    solarServo.write(servoAngle);
  }

  // Panel already aligned
  else
  {
    // Do nothing
  }

  delay(100);
}