// Define the LED pin
#define LED_PIN 4  // PB0 (Physical Pin 5 on ATtiny85)

void setup() {
  pinMode(LED_PIN, OUTPUT);  // Set PB0 as an output
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // Turn the LED on
  delay(1000);                  // Wait for 1 second
  digitalWrite(LED_PIN, LOW);   // Turn the LED off
  delay(1000);                  // Wait for 1 second
}
