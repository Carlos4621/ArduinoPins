#include "AnalogInput.hpp"

AnalogInput::AnalogInput(uint8_t pin) 
    : Pin{ pin, INPUT } {
}

uint16_t AnalogInput::read() const noexcept {
    this->checkPinInitialized();
    return analogRead(this->getPin());
}
