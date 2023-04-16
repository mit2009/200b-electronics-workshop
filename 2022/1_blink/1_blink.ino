/*
  Blink
  2.00b Electronics Tutorial!
  
  Turns an LED on for one second, then off for one second, repeatedly.
  Questions?
  [Victor Hung](vhung@mit.edu)
*/

// Remember to go to Tools > Board > Arduino Uno
// Also Port > [select your usb port]
// Once connected, hit Upload!

// the setup function runs once when you press reset or power the board

void setup() {
  // initialize digital pin 8 as an output.
  pinMode(8, OUTPUT);
}

// the loop function runs over and over again forever

void loop() {
  digitalWrite(8, HIGH);           // turn the LED on (HIGH is the voltage level)
  delay(1000);                     // wait one second
  digitalWrite(8, LOW);            // turn the LED off by making the voltage LOW
  delay(2000);                     // wait two seconds
}
