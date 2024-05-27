#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <fstream>
#include "Speedometer.h"
#include "Tachometer.h"
#include "FuelGauge.h"

void readDataFromFile(const std::string& fileName, Speedometer& speedometer, Tachometer& tachometer, FuelGauge& fuelGauge) {
    std::ifstream inputFile(fileName);
    int speedValue, rpmValue, fuelLevelValue;

    if (inputFile.is_open()) {
        while (inputFile >> speedValue >> rpmValue >> fuelLevelValue) {
            system("cls");
            std::cout << "Виртуальная приборная панель машины" << std::endl;
            std::cout << "-----------------------------------" << std::endl;
            speedometer.updateSpeed(speedValue);
            tachometer.updateRPM(rpmValue);
            fuelGauge.updateFuelLevel(fuelLevelValue);
            std::cout << "-----------------------------------" << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
        inputFile.close();
    }
    else {
        std::cout << "Не удалось открыть файл." << std::endl;
    }
}

int main() {
    setlocale(LC_ALL, "RUS");
    Speedometer speedometer;
    Tachometer tachometer;
    FuelGauge fuelGauge;

    const std::string dataFileName = "data.txt"; // Имя файла с данными
    readDataFromFile(dataFileName, speedometer, tachometer, fuelGauge);

    return 0;
}
