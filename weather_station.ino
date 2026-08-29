/*
 * IoT Weather Station
 * Project 2
 *
 * Measures temperature and humidity using DHT22
 * and displays the readings in the Serial Monitor.
 */

#include "DHT.h"

#define DHTPIN 2
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);

  dht.begin();

  Serial.println("================================");
  Serial.println("       IoT WEATHER STATION      ");
  Serial.println("================================");
  Serial.println("Weather monitoring started...");
  Serial.println();
}

void loop() {

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // Check whether sensor reading is valid
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Error: Unable to read DHT sensor!");
    delay(2000);
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  Serial.println("-------------------------------");

  delay(2000);
}
