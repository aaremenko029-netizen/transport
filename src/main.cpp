#include <iostream>
#include <vector>
#include <memory>
#include "Vehicle.hpp"
#include "Car.hpp"

int main() {
    std::cout << "=== Demonstration of Class Library ===" << std::endl << std::endl;

    // 1. Создание объектов на стеке
    Vehicle basicVehicle("Tractor XTZ", 2020);
    Car myCar("Tesla Model 3", 2023, 225);

    std::cout << "--- Calling object methods ---" << std::endl;
    basicVehicle.displayInfo();
    
    myCar.displayInfo();
    myCar.honk();
    std::cout << std::endl;

    return 0;
}
