#include <iostream>
using namespace std;

//  default arguments
inline double multiply(double a, double b = 1.0) {
    return a * b;
}

// Function Overloading
inline int add(int a, int b) {
    return a + b;
}

inline double add(double a, double b) {
    return a + b;
}

// Inline functionss
inline double subtract(double a, double b) {
    return a - b;
}

inline double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    cout << "--- Program 11: Inline Functions, Default Arguments, & Overloading ---\n" << endl;

    cout << "Add " << add(5, 10) << endl;
    cout << "Add " << add(5.5, 4.3) << endl;

    cout << "Multi " << multiply(4.0, 5.0) << endl;
    cout << "Multi " << multiply(7.0) << endl;

    cout << "Sub " << subtract(15.5, 3.2) << endl;
    cout << "Div" << divide(20.0, 4.0) << endl;

    return 0;
}