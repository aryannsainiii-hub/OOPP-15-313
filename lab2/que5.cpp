#include <iostream>
using namespace std;

class Employee {
private:
    double salary;

public:
    Employee(double s) {
        salary = s;
    }

    void updateSalary() {
       
        double &newSalary = salary;

        newSalary = newSalary + (newSalary * 0.10);
    }

    void displaySalary() {
        cout << "Salary after 10% increment: " << salary << endl;
    }
};//

int main() {
    Employee emp(50000);

    emp.updateSalary();

    emp.displaySalary();

    return 0;
}