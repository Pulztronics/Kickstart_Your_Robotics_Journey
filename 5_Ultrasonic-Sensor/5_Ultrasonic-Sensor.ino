const int trigPin = 9; // Pin connected to the trigger pin of the ultrasonic sensor
const int echoPin = 10; // Pin connected to the echo pin of the ultrasonic sensor

void setup() {
  pinMode(trigPin, OUTPUT); // Set the trigger pin as an output
  pinMode(echoPin, INPUT);  // Set the echo pin as an input
  Serial.begin(9600);       // Initialize serial communication for debugging
}

void loop() {
  // Generate a 10-microsecond pulse to trigger the sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the duration of the echo signal
  long duration = pulseIn(echoPin, HIGH);

  // Calculate the distance in centimeters
  long distance = duration * 0.034 / 2;

  // Print the distance to the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Wait a short time before the next measurement
  delay(100);
}
