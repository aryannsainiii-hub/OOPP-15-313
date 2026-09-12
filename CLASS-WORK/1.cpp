// wap to a input for any student like name branch ,roll no and marks of five subject find out the total and percenage of marks wwith the help of modular programming
//->modualar programminng means using functions 
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string branch;
    int rollNo;
    float marks[5];
    float totalMarks;
    float percentage;

public:
    Student() {
        totalMarks = 0.0;
        percentage = 0.0;
    }

    void input() {
        getline(cin >> ws, name);
        getline(cin >> ws, branch);
        cin >> rollNo;

        for (int i = 0; i < 5; ++i) {
            cin >> marks[i];
        }
    }

    void calculate() {
        totalMarks = 0;
        for (int i = 0; i < 5; ++i) {
            totalMarks += marks[i];
        }
        percentage = (totalMarks / 500.0) * 100.0;
    }

    float getTotalMarks() const { return totalMarks; }
    float getPercentage() const { return percentage; }
};

int main() {
    Student student1;

    student1.input();
    student1.calculate();

    return 0;
}