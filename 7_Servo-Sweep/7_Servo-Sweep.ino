#include <Servo.h>

Servo myServo;       // Create a servo object
const int servoPin = 9; // Servo connected to pin 9

void setup() {
  myServo.attach(servoPin); // Attach the servo to the specified pin
}

void loop() {
  // Sweep from 0 to 180 degrees
  for (int pos = 0; pos <= 180; pos++) {
    myServo.write(pos); // Set servo to the current position
    delay(15);          // Wait 15 ms for the servo to reach the position
  }

  // Sweep from 180 to 0 degrees
  for (int pos = 180; pos >= 0; pos--) {
    myServo.write(pos); // Set servo to the current position
    delay(15);          // Wait 15 ms for the servo to reach the position
  }
}
