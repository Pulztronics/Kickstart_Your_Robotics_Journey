#include <Ultrasonic.h>

#define TRIG_PIN 9   // Pin connected to the Trig pin of the ultrasonic sensor
#define ECHO_PIN 10  // Pin connected to the Echo pin of the ultrasonic sensor

Ultrasonic ultrasonic(TRIG_PIN, ECHO_PIN);

void setup() {
  Serial.begin(9600); // Initialize Serial communication
}

void loop() {
  // Measure distance in centimeters
  long distance = ultrasonic.read();

  // Print the distance to the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(100); // Wait a bit before the next measurement
}
