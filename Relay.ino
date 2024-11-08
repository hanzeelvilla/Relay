#include "Relay.h"

Relay bombaAire(27);
Relay bombaQueNoJala(26, "Algo muy largo");

void setup() {
  Serial.begin(115200);

  Serial.println("<-------------------- Bomba 1 -------------------->");
  bombaAire.init();
  bombaAire.info();

  Serial.println("<-------------------- Bomba 2 -------------------->");
  bombaQueNoJala.init();
  bombaQueNoJala.info();
}

void loop() {

}
