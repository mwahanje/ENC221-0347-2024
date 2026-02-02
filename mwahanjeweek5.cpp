#include <iostream>
using namespace std;

// Fraction structure
struct Fraction {
    int numerator;
    int denominator;
};

// Function to find the largest fraction
Fraction& largestFraction(Fraction& f1, Fraction& f2, Fraction& f3) {
    Fraction* largest = &f1;

    if (f2.numerator * largest->denominator >
        largest->numerator * f2.denominator) {
        largest = &f2;
    }

    if (f3.numerator * largest->denominator >
        largest->numerator * f3.denominator) {
        largest = &f3;
    }

    return *largest;
}

int main() {
    Fraction f1 = {1, 2};
    Fraction f2 = {3, 4};
    Fraction f3 = {2, 3};

    Fraction& result = largestFraction(f1, f2, f3);

    cout << "Largest Fraction is: "
         << result.numerator << "/"
         << result.denominator << endl;

    return 0;
}















