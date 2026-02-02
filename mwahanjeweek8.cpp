#include <iostream>
using namespace std;

// Base class
class Square {
protected:
    double side;

public:
    // Constructor
    Square(double s) {
        side = s;
    }

    // Destructor
    ~Square() {
    }

    // Perimeter of square
    double getPeri() {
        return 4 * side;
    }

    // Area of square
    double getArea() {
        return side * side;
    }
};

// Derived class
class Cube : public Square {
public:
    // Constructor calling base constructor
    Cube(double s) : Square(s) {
    }

    // Surface area of cube
    double getArea() {
        return 6 * side * side;
    }

    // Volume of cube
    double getVolume() {
        return side * side * side;
    }
};

int main() {
    Cube c(5);

    cout << "Perimeter of base square: " << c.getPeri() << endl;
    cout << "Surface area of cube: " << c.getArea() << endl;
    cout << "Volume of cube: " << c.getVolume() << endl;

    return 0;
}







