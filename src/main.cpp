#include <Arduino.h>

#define LED_PIN 2

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
  Serial.println("Быстрое мигание запущено!");
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  Serial.println("⚡ ВКЛ");
  delay(250);  // Быстрее!
  
  digitalWrite(LED_PIN, LOW);
  Serial.println("⚡ ВЫКЛ");
  delay(250);  // Быстрее!
}