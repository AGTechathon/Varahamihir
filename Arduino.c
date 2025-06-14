// The coading of arduino 

const int ledPin = 13;  // LED connected to digital pin 13

void setup() {
  
  // Set pin modes
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Main code here
  digitalWrite(ledPin, HIGH);  // Turn Motor on
  delay(7000);                //  7 second turn on Motor
  digitalWrite(ledPin, LOW);   // Turn Motor off
  delay(1000);                // 3 second turn off motor
}

