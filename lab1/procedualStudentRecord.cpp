#include <iostream>
#include <string>
using namespace std;
//we'll put marks this timeee
class Student {
    string name;
    int roll;
    double marks;

    public:
    void input(){
        cout<<"name";
        cin>>name;
        cout<<"roll";
        cin>>roll;
        cout<<"branch";
        cin>>marks;
    }
    void show(){
        cout<<"name :"<<name<<endl;
        cout<<"roll :"<<roll<<endl;
        cout<<"branch :"<<marks<<endl;
    }
};

int main(){
    Student s1,s2;
    s1.input();
    s2.input();

    return 0;
}