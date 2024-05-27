#include "Speedometer.h"
#include <iostream>

Speedometer::Speedometer() : currentSpeed(0), maxSpeed(240) {}

void Speedometer::updateSpeed(int speed) {
    currentSpeed = speed;
    displayScale(speed, maxSpeed);
}

void Speedometer::displayScale(int value, int maxValue) {
    int scaleSize = 50;
    int scaledValue = (value * scaleSize) / maxValue;
    std::cout << "Спидометр: [";
    for (int i = 0; i < scaleSize; ++i) {
        if (i < scaledValue) std::cout << "|";
        else std::cout << " ";
    }
    std::cout << "] " << value << " км/ч" << std::endl;
}
