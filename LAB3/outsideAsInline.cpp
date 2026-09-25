#include <iostream>
using namespace std;

class point {
    int x, y;

public:
    void input();
    void show();
};

// inline function
inline void point::input() {
    cout << "X : ";
    cin >> x;

    cout << "Y : ";
    cin >> y;
}

//  inline function
inline void point::show() {
    cout << "X : " << x << endl;
    cout << "Y : " << y << endl;
}

int main() {
    point p1, p2;

    p1.input();
    p2.input();

    p1.show();
    p2.show();

    return 0;
}