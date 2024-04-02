#include <iostream>
#include <cmath>

class Shape {
public:
    virtual double area() const = 0; // Pure virtual function
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }
};

int main() {
    // Example usage
    Shape* rectangle = new Rectangle(4.0, 5.0);
    Shape* circle = new Circle(2.0);

    std::cout << "Rectangle Area: " << rectangle->area() << std::endl;
    std::cout << "Circle Area: " << circle->area() << std::endl;

    delete rectangle;
    delete circle;

    return 0;
}
