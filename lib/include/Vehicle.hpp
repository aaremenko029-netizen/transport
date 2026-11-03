#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include <string>

class Vehicle {
protected:
    std::string brand;
    int year;

public:
    Vehicle(const std::string& brand, int year);
    virtual ~Vehicle() = default;

    virtual void displayInfo() const;
    
    std::string getBrand() const;
    int getYear() const;
};

#endif
