#include <iostream>
#include <cmath>
using namespace std;
double area(double radius) {
    return 3.141592653589793 * radius * radius;
}

double area(double length, double width) {
    return length * width;
}

int area(int side) {
    return side * side;
}

double area(double base, double height, bool triangle) {
    if (triangle) {
        return 0.5 * base * height;
    }
    return 0.0;
}

int main() {
    cout << "--- Program 12: Area Calculation using Function Overloading ---\n" << endl;

    cout << "Area of Circle: " 
         << area(5.0) << endl;

    cout << "Area of Rectangle: " 
         << area(4.0, 6.0) << endl;

    cout << "Area of Square " 
         << area(4) << endl;

    cout << "Area of Triangle:" 
         << area(6.0, 3.0, true) << endl;

    return 0;
}