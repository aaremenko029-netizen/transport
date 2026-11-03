#ifndef CAR_HPP
#define CAR_HPP

#include "Vehicle.hpp"

class Car : public Vehicle {
private:
    int maxSpeed;

public:
    Car(const std::string& brand, int year, int maxSpeed);

    void displayInfo() const override; 
    void honk() const;                 
};

#endif // CAR_HPP
