#include "Tachometer.h"
#include <iostream>

Tachometer::Tachometer() : currentRPM(0), maxRPM(8000) {}

void Tachometer::updateRPM(int rpm) {
    currentRPM = rpm;
    displayScale(rpm, maxRPM);
}

void Tachometer::displayScale(int value, int maxValue) {
    int scaleSize = 50;
    int scaledValue = (value * scaleSize) / maxValue;
    std::cout << "Тахометр:   [";
    for (int i = 0; i < scaleSize; ++i) {
        if (i < scaledValue) std::cout << "|";
        else std::cout << " ";
    }
    std::cout << "] " << value << " RPM" << std::endl;
}
