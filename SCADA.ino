#include <DHT.h>
#include <math.h>

// -------------------- Pins --------------------
#define DHTPIN 2
#define DHTTYPE DHT22
#define CURRENT_PIN A3   // ACS712
#define THERM_PIN A1     // Thermistor

// -------------------- Objects --------------------
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {

  // -------------------- 1. DHT22 --------------------
  float humidity = dht.readHumidity();
  float tempDHT = dht.readTemperature();

  if (isnan(humidity) || isnan(tempDHT)) {
    humidity = -1;
    tempDHT = -1;
  }

  // -------------------- 2. ACS712 Current --------------------
  int rawCurrent = analogRead(CURRENT_PIN);
  float vOut = (rawCurrent / 1023.0) * 5.0;
  float current = (vOut - 2.5) / 0.185; // ACS712 5A

  // -------------------- 3. Thermistor (A1) --------------------
  int rawTherm = analogRead(THERM_PIN);
  if (rawTherm == 0) rawTherm = 1;

  float resistance = (1023.0 / rawTherm - 1.0) * 10000.0; // 10k resistor
  float tempK = 1.0 / (log(resistance / 10000.0) / 3950.0 + 1.0 / 298.15);
  float tempTherm = tempK - 273.15;

  // -------------------- 4. Send JSON --------------------
  Serial.print("{");
  Serial.print("\"TempDHT\":"); Serial.print(tempDHT, 1); Serial.print(",");
  Serial.print("\"Humidity\":"); Serial.print(humidity, 1); Serial.print(",");
  Serial.print("\"TempTherm\":"); Serial.print(tempTherm, 1); Serial.print(",");
  Serial.print("\"Current\":"); Serial.print(current, 2);
  Serial.println("}");

  delay(1000);
}
