const int ledPin = 9; // PWM pin connected to the LED
int brightness = 0;   // Current brightness of the LED
int fadeAmount = 5;   // Amount by which brightness changes

void setup() {
  pinMode(ledPin, OUTPUT); // Set LED pin as an output
}

void loop() {
  // Set the brightness of the LED
  analogWrite(ledPin, brightness);

  // Adjust the brightness for the next cycle
  brightness += fadeAmount;

  // Reverse the direction of fading at the ends of the range
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }

  // Wait for a short moment before the next update
  delay(30);
}
