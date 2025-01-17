#include <Servo.h>

Servo myServo;       // Create a servo object
const int servoPin = 9; // Servo connected to pin 9

void setup() {
  myServo.attach(servoPin); // Attach the servo to the specified pin
  Serial.begin(9600);       // Initialize Serial communication
  Serial.println("Enter an angle between 0 and 180:");
}

void loop() {
  if (Serial.available() > 0) {
    int angle = Serial.parseInt(); // Read the angle from the Serial Monitor

    // Check if the angle is valid (between 0 and 180)
    if (angle >= 0 && angle <= 180) {
      myServo.write(angle); // Set the servo to the input angle
      Serial.print("Servo angle set to: ");
      Serial.println(angle);
    } else {
      Serial.println("Invalid angle! Please enter a value between 0 and 180.");
    }
  }
}
