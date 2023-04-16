// Relay Demo
// Victor Hung (vhung@mit.edu)
// MIT 2.00b
//
// Turn a relay (with signal wire plugged into pin 4) on and off at 2 second intervals

int randNumber;

void setup() {
  pinMode(4, OUTPUT);
  pinMode(8, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(8) == LOW) {
    randNumber = random(5);
    if (randNumber == 0) {
      digitalWrite(4, HIGH);
    }
    delay(1000);
    digitalWrite(4, LOW);
  }
}


