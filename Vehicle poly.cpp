#include <iostream>

class Vehicle {
public:
    virtual void drive() const = 0; // Pure virtual function
};

class Car : public Vehicle {
public:
    void drive() const override {
        std::cout << "Car is driving on the road." << std::endl;
    }
};

class Truck : public Vehicle {
public:
    void drive() const override {
        std::cout << "Truck is carrying goods on the highway." << std::endl;
    }
};

int main() {
    // Example usage
    Vehicle* car = new Car();
    Vehicle* truck = new Truck();

    std::cout << "Car: ";
    car->drive();

    std::cout << "Truck: ";
    truck->drive();

    delete car;
    delete truck;

    return 0;
}
