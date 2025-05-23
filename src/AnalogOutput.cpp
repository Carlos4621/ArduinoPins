#include "AnalogOutput.hpp"

AnalogOutput::AnalogOutput(uint8_t pin)
    : Pin{ pin, OUTPUT } {
}

void AnalogOutput::write(uint16_t value) {
    this->checkPinInitialized();
    analogWrite(this->getPin(), static_cast<int>(value));
}
