/*
    Ejemplo de cómo parpadear un led con DigitalOutput
*/

#include <Arduino.h>
#include "DigitalOutput.hpp"

static constexpr uint8_t ButtonGPIOPin{ 4 };

DigitalOutput led{ ButtonGPIOPin };

void setup() {
    led.begin(); // Inicializar antes de usar
}

void loop() {
    led.write(true); // o 1 o HIGH

    delay(1000);

    led.write(false); // o 0 u LOW

    delay(1000);
}
