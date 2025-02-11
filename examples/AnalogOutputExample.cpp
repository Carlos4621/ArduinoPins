/*
    Ejemplo de escritura analógica con AnalogOutput
*/

#include <Arduino.h>
#include "AnalogOutput.hpp"

static constexpr uint8_t AnalogGPIOPin{ 4 };

AnalogOutput analogOutput{ AnalogGPIOPin };

void setup() {
    analogOutput.begin(); // Inicializar antes de usar
}

void loop() {
    for (size_t i{ 0 }; i < 4095; ++i) {
        analogOutput.write(i);

        delay(100);
    }
}
