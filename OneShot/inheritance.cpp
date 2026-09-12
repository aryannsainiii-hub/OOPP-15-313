#include<iostream>
#include<string>
using namespace std;

class person{
    
    public:
    string name;
    int age;

    void input(string n , int a){
        name=n;
        age=a;
    }
};

int main(){
    person p1,p2;
    p1.input("Alice",25);
    p2.input("Bob",30);



    return 0;
}