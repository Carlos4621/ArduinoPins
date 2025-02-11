# ArduinoPins
Una librería para el mejor manejo de pines, permitiendo una mejor legibilidad y mantenimiento del código

## Ejemplos
Ejemplos para el uso de todas las clases se encuentran en la carpeta examples

```cpp
/*
    Ejemplo de cómo parpadear un led con DigitalOutput
*/

#include <Arduino.h>
#include "DigitalOutput.hpp"

static constexpr uint8_t ledGPIOPin{ 4 };

DigitalOutput led{ ledGPIOPin };

void setup() {
    led.begin(); // Inicializar antes de usar
}

void loop() {
    led.write(true); // o 1 o HIGH

    delay(1000);

    led.write(false); // o 0 u LOW

    delay(1000);
}

```
