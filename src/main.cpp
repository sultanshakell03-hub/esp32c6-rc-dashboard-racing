#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("ESP32-C6 RC DASHBOARD START");
}

void loop() {
  Serial.println("System running...");
  delay(1000);
}