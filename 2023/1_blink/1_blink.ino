// Blink
// Victor Hung (vhung@mit.edu)
// MIT 2.00b
//
// Let's blink an LED on pin 8!

void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(8, HIGH);
  delay(300);
  digitalWrite(8, LOW);
  delay(300);
}
