#include "Vehicle.hpp"
#include <iostream>

Vehicle::Vehicle(const std::string& brand, int year) : brand(brand), year(year) {}

void Vehicle::displayInfo() const {
    std::cout << "Транспортний засіб: " << brand << " (" << year << " рік)" << std::endl;
}

std::string Vehicle::getBrand() const { return brand; }
int Vehicle::getYear() const { return year; }
