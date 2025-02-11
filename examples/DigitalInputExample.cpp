/*
    Ejemplo de lectura de un botón con DigitalInput
*/

#include <Arduino.h>
#include "DigitalInput.hpp"

static constexpr uint8_t ledGPIOPin{ 4 };

DigitalInput button{ ledGPIOPin };

void setup() {
    button.begin(); // Inicializar antes de usar

    Serial.begin(9600);
}

void loop() {
    if (button.read()) {
        Serial.println("Presionado!");
    }   
}
