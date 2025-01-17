int delayTime = 100; // delay between LED changes
void setup() {
  // Define LED pins as outputs
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  // Move LEDs forward
  digitalWrite(2, HIGH);
  delay(delayTime);
  digitalWrite(2, LOW);

  digitalWrite(3, HIGH);
  delay(delayTime);
  digitalWrite(3, LOW);

  digitalWrite(4, HIGH);
  delay(delayTime);
  digitalWrite(4, LOW);

  digitalWrite(5, HIGH);
  delay(delayTime);
  digitalWrite(5, LOW);

  digitalWrite(6, HIGH);
  delay(delayTime);
  digitalWrite(6, LOW);

  // Move LEDs backward
  digitalWrite(5, HIGH);
  delay(delayTime);
  digitalWrite(5, LOW);

  digitalWrite(4, HIGH);
  delay(delayTime);
  digitalWrite(4, LOW);

  digitalWrite(3, HIGH);
  delay(delayTime);
  digitalWrite(3, LOW);

  digitalWrite(2, HIGH);
  delay(delayTime);
  digitalWrite(2, LOW);
}
