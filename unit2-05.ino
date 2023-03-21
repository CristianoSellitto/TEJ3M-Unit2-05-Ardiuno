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
  servo.write(180);
  delay(1000);
  servo.write(0);
  delay(1000);
}
