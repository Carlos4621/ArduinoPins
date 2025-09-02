#pragma once
#ifndef DIGITAL_INPUT_HEADER
#define DIGITAL_INPUT_HEADER

#include "Pin.hpp"

/// @brief Pin de entrada digital
class DigitalInput : public Pin {
public:

    /// @brief Constructor base
    /// @param pin Número GPIO del pin a usar
    explicit DigitalInput(uint8_t pin);

    /// @brief Lee el estado actual del pin
    /// @return El estado actual del pin
    [[nodiscard]]
    bool read() const noexcept;

    /// @brief Espera x segundos una entrada
    /// @param timeoutInMs Tiempo en milisegundos a esperar la entrada
    /// @param watchdogInMs Tiempo en milisegundos entre cada muestreo, ideal para evitar usar toda la CPU en chequeos periódicos
    /// @return true en caso de detectar una entrada antes de timeout, false si no se detecta una entrada en dicho tiempo
    [[maybe_unused]]
    bool waitForInput(size_t timeoutInMs, uint8_t watchdogInMs = 1);
};

#endif // !DIGITAL_INPUT_HEADER
