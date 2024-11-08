#include "Relay.h"
// in ESP32 a 5V relay needs to be conected to 3.3V

Relay waterPump(27); // out = NO
Relay AirPump(26, "Sponge Bob square pants"); // out = NO
Relay led(25, "NC"); 

void setup() {
  Serial.begin(115200);

  Serial.println("<-------------------- Water Pump -------------------->");
  waterPump.init();
  waterPump.info();

  Serial.println("<-------------------- Air Pump -------------------->");
  AirPump.init();
  AirPump.info();

  Serial.println("<-------------------- Led -------------------->");
  led.init();
  led.info();

  Serial.println("<-------------------------------------------->");
}

void loop() {
  Serial.println("Water pump ON");
  waterPump.on();
  Serial.println("Led ON");
  led.on();
  delay(1000);

  Serial.println("Water pump OFF");
  waterPump.off();
  Serial.println("Led OFF");
  led.off();
  delay(1000);
}