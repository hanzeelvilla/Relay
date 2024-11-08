#include "Relay.h"

void Relay::init() {
  pinMode(pin, OUTPUT);
}

void Relay::info() {
  Serial.print("Pin: ");
  Serial.println(pin);
  Serial.print("Out: ");
  Serial.println(out);
}