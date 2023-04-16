/*
  Relay and Button
  2.00b Electronics Tutorial!
  
  After pressing the button, the relay MAY or MAY NOT activate
  Questions?
  [Victor Hung](vhung@mit.edu)
*/

void setup() {
  pinMode(8, OUTPUT);                  // initialize digital pin 8 as our output (relay)
  pinMode(6, INPUT_PULLUP);            // initialize digital pin 6 as our button
}

void loop() {
  if (digitalRead(6) == LOW) {
    int randNumber = random(0, 3);     // Select a random number between 0 and 3 (upper bound 3 is exclusive)
                                       
    delay(500);                       // Let's build some suspense
    
    if (randNumber == 0) {             // If it was 0 then we proceed with writing HIGH
      digitalWrite(8, HIGH);           // turn the relay on (HIGH is the voltage level)
      delay(500);                      // wait half a second
      digitalWrite(8, LOW);            // turn the relay off by making the voltage LOW
    }
  }
}
