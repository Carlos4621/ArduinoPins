/*
    Ejemplo de lectura de un botón con DigitalInput
*/

#include <Arduino.h>
#include "DigitalInput.hpp"

static constexpr uint8_t ButtonGPIOPin{ 4 };

DigitalInput button{ ButtonGPIOPin };

void setup() {
    button.begin(); // Inicializar antes de usar

    Serial.begin(9600);
}

void loop() {
    if (button.read()) {
        Serial.println("Presionado!");
    }   
}
