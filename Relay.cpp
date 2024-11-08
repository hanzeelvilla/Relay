#include "esp32-hal-gpio.h"
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

void Relay::on() {
  if (strcmp(out, "NC") == 0)
    digitalWrite(pin, HIGH);
  else
    digitalWrite(pin, LOW);
}

void Relay::off() {
  if (strcmp(out, "NC") == 0)
    digitalWrite(pin, LOW);
  else
    digitalWrite(pin, HIGH);
}