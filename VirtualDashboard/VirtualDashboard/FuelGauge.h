#ifndef FUELGAUGE_H
#define FUELGAUGE_H

class FuelGauge {
public:
    FuelGauge(); // ����������� �� ���������
    void updateFuelLevel(int level);
private:
    int fuelLevel;
    void displayScale(int value, int maxValue);
};

#endif // FUELGAUGE_H
