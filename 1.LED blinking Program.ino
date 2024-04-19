// Pin connected to the LED
const int ledPin = 13;

// Setup function runs once when the sketch starts
void setup() {
  // Initialize digital pin as an output
  pinMode(ledPin, OUTPUT);
}

// Loop function runs repeatedly after setup
void loop() {
  // Turn the LED on
  digitalWrite(ledPin, HIGH);
  // Wait for 1 second
  delay(1000);
  // Turn the LED off
  digitalWrite(ledPin, LOW);
  // Wait for 1 second
  delay(1000);
}
