// Reed Switch
// Victor Hung (vhung@mit.edu)
// MIT 2.00b
//
// Read the output of a reed switch and display it in the serial monitor. One end of the reed switch should be connected to pin 2, and the other to ground. When the magnet gets close to the reed switch, you should see the output change between 0 and 1.

void setup() {
  pinMode(2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(2));
}


