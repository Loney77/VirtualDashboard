#include "FuelGauge.h"
#include <iostream>

FuelGauge::FuelGauge() : fuelLevel(100) {}

void FuelGauge::updateFuelLevel(int level) {
    fuelLevel = level;
    displayScale(level, 100);
}

void FuelGauge::displayScale(int value, int maxValue) {
    int scaleSize = 50;
    int scaledValue = (value * scaleSize) / maxValue;
    std::cout << "Топливо:    [";
    for (int i = 0; i < scaleSize; ++i) {
        if (i < scaledValue) std::cout << "|";
        else std::cout << " ";
    }
    std::cout << "] " << value << "%" << std::endl;
}
