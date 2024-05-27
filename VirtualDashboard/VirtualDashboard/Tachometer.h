#ifndef TACHOMETER_H
#define TACHOMETER_H

class Tachometer {
public:
    Tachometer(); // ����������� �� ���������
    void updateRPM(int rpm);
private:
    int currentRPM;
    const int maxRPM;
    void displayScale(int value, int maxValue);
};

#endif // TACHOMETER_H

