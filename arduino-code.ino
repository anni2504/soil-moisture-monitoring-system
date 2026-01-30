int sensorPin = A0;
int sensorValue = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  int moisturePercent = map(sensorValue, 1023, 0, 0, 100);
  
  Serial.print("Soil Moisture: ");
  Serial.print(moisturePercent);
  Serial.println("%");

  delay(2000);
}
