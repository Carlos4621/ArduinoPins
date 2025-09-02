#include "DigitalInput.hpp"

DigitalInput::DigitalInput(uint8_t pin) 
    : Pin{ pin, INPUT } {
}

bool DigitalInput::read() const noexcept {
    this->checkPinInitialized();
    return digitalRead(this->getPin());
}

bool DigitalInput::waitForInput(size_t timeoutInMs, uint8_t watchdogInMs) {
    const auto initialTime{ millis() };

    while ((millis() - initialTime) < timeoutInMs) {
        if (read()) {
            return true;
        }

        delay(watchdogInMs);
    }
    
    return false;
}