/*
  Created by: Cristiano S
  Created on: March 2023

  Spins a servo 180 degrees
*/

#include <Servo.h>

Servo servo;

void setup()
{
  servo.attach(2); // Attach servo to pin 2
  servo.write(0);  // Set servo to 0 degrees
  delay(1000);     // Wait for 1000 millisecond(s)
}

void loop()
{
  // Set the angle from 0 to 180
  for (int angle = 0; angle < 180; angle++) {
    servo.write(angle);
    delay(15);
  }
  // Set the angle from 180 to 0
  for (int angle = 180; angle > 0; angle--) {
    servo.write(angle);
    delay(15);
  }
}
