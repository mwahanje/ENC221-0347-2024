#include <iostream>
#include <string>

using namespace std;

// Abstract base class
class Employee {
protected:
    string firstName;
    char initial;
    string lastName;

public:
    Employee(string f, char i, string l) {
        firstName = f;
        initial = i;
        lastName = l;
    }

    // Pure virtual function
    virtual double calculateSalary() = 0;

    // Virtual destructor
    virtual ~Employee() {
    }

    string getFullName() {
        return firstName + " " + initial + ". " + lastName;
    }
};

// Derived class: SalaryEmployee
class SalaryEmployee : public Employee {
private:
    double monthlySalary;

public:
    SalaryEmployee(string f, char i, string l, double salary)
        : Employee(f, i, l) {
        monthlySalary = salary;
    }

    double calculateSalary() override {
        return monthlySalary;
    }
};

// Derived class: HourlyEmployee
class HourlyEmployee : public Employee {
private:
    double hoursWorked;
    double hourlyRate;

public:
    HourlyEmployee(string f, char i, string l, double hours, double rate)
        : Employee(f, i, l) {
        hoursWorked = hours;
        hourlyRate = rate;
    }

    double calculateSalary() override {
        return hoursWorked * hourlyRate;
    }
};

int main() {
    Employee* emp1 = new SalaryEmployee("John", 'A', "Doe", 60000);
    Employee* emp2 = new HourlyEmployee("Jane", 'B', "Smith", 160, 25);

    cout << emp1->getFullName() << " Salary: "
         << emp1->calculateSalary() << endl;

    cout << emp2->getFullName() << " Salary: "
         << emp2->calculateSalary() << endl;

    delete emp1;
    delete emp2;

    return 0;
}





