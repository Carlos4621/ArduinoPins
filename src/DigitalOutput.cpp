#include "DigitalOutput.hpp"

DigitalOutput::DigitalOutput(uint8_t pin)
    : Pin{ pin, OUTPUT } {
}

void DigitalOutput::write(bool value) {
    this->checkPinInitialized();
    digitalWrite(this->getPin(), value);
}
