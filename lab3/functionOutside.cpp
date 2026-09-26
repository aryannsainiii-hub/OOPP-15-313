#include <iostream>
using namespace std;

class Time {
    int hh, mm, ss;

public:
    void input(int h = 0, int m = 0, int s = 0);
    void show();
};

// outside the classs
void Time::input(int h, int m, int s) {
    hh = h;
    mm = m;
    ss = s;
}

// outside the class
void Time::show() {
    cout << hh << " " << mm << " " << ss << endl;
}

int main() {
    Time t1, t2, t3;

    t1.input(10, 20, 30);
    t2.input(40, 50, 60);
    t3.input();             

    t1.show();
    t2.show();
    t3.show();

    return 0;
}