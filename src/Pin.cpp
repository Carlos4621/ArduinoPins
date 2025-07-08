#include "Pin.hpp"

Pin::Pin(uint8_t pin, uint8_t pinMode) 
    : pin_m{ pin }
    , pinMode_m{ pinMode } 
{
}

void Pin::begin() {
    if (!pinInitialized_m) {
        pinMode(pin_m, pinMode_m);
        pinInitialized_m = true;
    }
}

uint8_t Pin::getPin() const noexcept {
    return pin_m;
}

void Pin::checkPinInitialized() const {
    #if defined(__cpp_exceptions) || defined(__EXCEPTIONS)
    if (!pinInitialized_m) {
        throw std::logic_error("Pin not initialized. Call begin() before using the pin.");
    }
    #endif
}
