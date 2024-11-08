#ifndef RELAY_H
#define RELAY_H

#include "Arduino.h"

class Relay {
  private:
    int pin;
    const char* out;

  public:
    Relay(int pinRelay, const char* outRelay = "NO") {
    pin = pinRelay;

    // change 'out' to 'NO' if it receives a different value
    if (strcmp(outRelay, "NO") != 0 && strcmp(outRelay, "NC") != 0) 
      out = "NO";
    else
      out = outRelay;
    }

    void init();
    void info();
};
#endif