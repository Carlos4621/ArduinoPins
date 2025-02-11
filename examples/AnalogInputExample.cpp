/*
    Ejemplo de lectura de un potenciómetro con AnalogInput
*/

#include <Arduino.h>
#include "AnalogInput.hpp"

static constexpr uint8_t PotentiometerGPIOPin{ 4 };

AnalogInput potentiometer{ PotentiometerGPIOPin };

void setup() {
    potentiometer.begin(); // Inicializar antes de usar

    Serial.begin(9600);
}

void loop() {
    Serial.println(potentiometer.read());

    delay(500);
}
