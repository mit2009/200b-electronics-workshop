// Servo Demo
// Victor Hung (vhung@mit.edu)
// MIT 2.00b
//
// Turn a servo one direction and then the other

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

void setup() {
  myservo.attach(6);  // attaches the servo on pin 6
}

void loop() {
  // Range is from 0 to 180. For continuous servos, 90 is 'still', >90 is clockwise, < 90 is ccw
  myservo.write(110);                 
  delay(2000);                           
  myservo.write(70);                  
  delay(2000);                           
}