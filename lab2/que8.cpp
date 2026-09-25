#include <iostream>
using namespace std;

class Demo {
public:
    void callByValue(int x) {
        x = x + 10;

        cout << "Inside Call by Value: " << x << endl;
    }

    void callByReference(int &x) {
        x = x + 10;

        cout << "Inside Call by Reference: " << x << endl;
    }

    void callByAddress(int *x) {
        *x = *x + 10;

        cout << "Inside Call by Address: " << *x << endl;
    }
};

int main() {

    Demo obj;

    int a = 10;
    int b = 10;
    int c = 10;

    cout << "Before Call by Value: " << a << endl;
    obj.callByValue(a);
    cout << "After Call by Value: " << a << endl;

    cout << "\nBefore Call by Reference: " << b << endl;
    obj.callByReference(b);
    cout << "After Call by Reference: " << b << endl;

    cout << "\nBefore Call by Address: " << c << endl;
    obj.callByAddress(&c);
    cout << "After Call by Address: " << c << endl;

    return 0;
}