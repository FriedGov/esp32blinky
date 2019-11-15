#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(4, HIGH);
  delay(1000);
  Serial.println("hi");
  digitalWrite(4, LOW);
  delay(1000);
}