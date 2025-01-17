const int ledPins[] = {2, 3, 4, 5, 6}; // LED pins
const int numLeds = sizeof(ledPins);

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT); // Set each pin as an output
  }
}

void loop() {
  // Move LEDs forward
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH); // Turn on current LED
    delay(200);                     // Wait
    digitalWrite(ledPins[i], LOW);  // Turn off current LED
  }

  // Move LEDs backward
  for (int i = numLeds - 2; i >= 0; i--) { // Start from second-to-last LED
    digitalWrite(ledPins[i], HIGH); // Turn on current LED
    delay(200);                     // Wait
    digitalWrite(ledPins[i], LOW);  // Turn off current LED
  }
}
