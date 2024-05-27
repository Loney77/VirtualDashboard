#ifndef FUELGAUGE_H
#define FUELGAUGE_H

class FuelGauge {
public:
    FuelGauge(); // Конструктор по умолчанию
    void updateFuelLevel(int level);
private:
    int fuelLevel;
    void displayScale(int value, int maxValue);
};

#endif // FUELGAUGE_H
