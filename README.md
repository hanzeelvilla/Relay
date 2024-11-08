# Relay Library for Arduino

This is a simple Arduino library for controlling relays, allowing you to manage devices that can be in either a normally open (**NO**) or normally closed (**NC**) state. The library provides methods to initialize, turn on, turn off, and display the relay status through the serial monitor.

## Features

* Supports Normally Open (**NO**) and Normally Closed (**NC**) relay states.
* Provides methods to initialize the relay pin, set the relay state, and print relay info.

## Getting Started

### Include the Library
To use the library in your Arduino sketch, include the **Relay.h** header file.

```
#include "Relay.h"
```

### Creating a Relay Object
Create a Relay object, specifying the pin number and the relay type (**optional**) **"NO"** for Normally Open, **"NC"** for Normally Closed.

```
Relay myRelay(27, "NO"); // Relay on pin 27, Normally Open
```

> [!NOTE]
> If no relay type is specified, it defaults to "NO".

### Initializing the Relay
Call the **init()** method to set up the relay pin as an output and validate the relay type.

```
myRelay.init();
```

### Turning the Relay On and Off
Use **on()** and **off()** methods to control the relay.

```
myRelay.on();  // Turns the relay on
myRelay.off(); // Turns the relay off
```

## Methods
* void **init()**: Initializes the relay pin as an output and validates the relay type. If the type is invalid, sets the relay type to "NO" and prints an error message.
* void **on()**: Sets the relay to the "on" state based on the relay type.
* void **off()**: Sets the relay to the "off" state based on the relay type.
* void **info()**: Prints the relay's pin number and type to the serial monitor.

> [!WARNING]
> Ensure the relay is connected properly to avoid short circuits or damage to the board.
