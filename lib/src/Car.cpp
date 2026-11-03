#include "Car.hpp"
#include <iostream>

Car::Car(const std::string& brand, int year, int maxSpeed) 
    : Vehicle(brand, year), maxSpeed(maxSpeed) {}

void Car::displayInfo() const {
    // Вызываем метод базового класса, чтобы не дублировать код
    Vehicle::displayInfo(); 
    std::cout << " -> Тип: Автомобіль, Макс. швидкість: " << maxSpeed << " км/год" << std::endl;
}

void Car::honk() const {
    std::cout << brand << " сигналізує: Бі-біп!" << std::endl;
}
