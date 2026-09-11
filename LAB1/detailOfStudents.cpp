#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int roll;
    string branch;

    public:
    void input(){
        cout<<"name";
        cin>>name;
        cout<<"roll";
        cin>>roll;
        cout<<"branch";
        cin>>branch;
    }
    void show(){
        cout<<"name :"<<name<<endl;
        cout<<"roll :"<<roll<<endl;
        cout<<"branch :"<<branch<<endl;
    }
};

int main(){
    Student s1,s2;
    s1.input();
    s2.input();

    s1.show();
    s2.show();

    return 0;
}