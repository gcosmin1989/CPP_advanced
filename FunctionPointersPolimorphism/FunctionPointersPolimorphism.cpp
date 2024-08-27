#include <iostream>
#include <cmath>
using namespace std;


class Shape {
public:
    virtual double area() const = 0; 
};


class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return 3.14 * radius * radius;
    }
};


class Square : public Shape {
    double side;
public:
    Square(double s) : side(s) {}
    double area() const override {
        return side * side;
    }
};


double calculateArea(const Shape* shape, double (*areaFunction)(const Shape*)) {
    return areaFunction(shape);
}


double getCircleArea(const Shape* shape) {
    return shape->area();  
}

double getSquareArea(const Shape* shape) {
    return shape->area();  
}

int main() {
    Circle circle(5.0);
    Square square(4.0);


    cout << "Circle Area: " << calculateArea(&circle, getCircleArea) << endl;
    cout << "Square Area: " << calculateArea(&square, getSquareArea) << endl;

    return 0;
}
