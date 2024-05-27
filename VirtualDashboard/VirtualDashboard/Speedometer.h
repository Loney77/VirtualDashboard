#ifndef SPEEDOMETER_H
#define SPEEDOMETER_H

class Speedometer {
public:
    Speedometer(); // Конструктор по умолчанию
    void updateSpeed(int speed);
private:
    int currentSpeed;
    const int maxSpeed;
    void displayScale(int value, int maxValue);
};

#endif // SPEEDOMETER_H

