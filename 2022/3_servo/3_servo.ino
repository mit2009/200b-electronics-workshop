/*
  Servo - Let's get moving!
  2.00b Electronics Tutorial!
  
  The continuous servo will rotate one way for 
  2 seconds, then rotate the other way for 2 seconds.
  Questions?
  [Victor Hung](vhung@mit.edu)
*/

#include <Servo.h>

Servo myservo;        // create servo object to control a servo

void setup() {
  myservo.attach(6);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  myservo.write(180); // write the "max" (180 is ccw at full speed)
  delay(2000);
  myservo.write(0);   // write the "min" (0 is cw at full speed)
  delay(2000);
}
