// Project 02: Automatic Temperature Monitoring and Alert System

const int sensorPin = A0;
const int ledPin = 13;
const int buzzerPin = 8;

const float thresholdC = 30.0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // Read the TMP36 sensor
  int sensorValue = analogRead(sensorPin);

  // Convert analog reading to voltage
  float voltage = sensorValue * (5.0 / 1023.0);

  // Convert voltage to temperature in Celsius
  float temperatureC = (voltage - 0.5) * 100.0;

  // Display temperature on Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" C");

  // Activate alerts when temperature reaches 30°C
  if (temperatureC >= thresholdC) {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000);
  } else {
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  }

  delay(1000);
}
