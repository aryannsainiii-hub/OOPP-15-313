#include <iostream>
using namespace std;

class Employee {
public:
    void updateSalary(double *salary) {
        *salary = *salary + (*salary * 0.10);
    }
};

int main() {
    Employee emp;

    double salary = 50000;

    cout << "Original Salary: " << salary << endl;

    emp.updateSalary(&salary);

    cout << "Updated Salary: " << salary << endl;

    return 0;
}//