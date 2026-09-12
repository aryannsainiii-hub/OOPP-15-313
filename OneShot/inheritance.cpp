#include<iostream>
#include<string>
using namespace std;

class person{
    
    public:
    string name;
    int age;

    // person(string name , int age){ //constructor
    //     this->name=name;
    //     this->age=age;
    // }
};

class student : public person{
    public:
    int rollno;

    // student(string name, int age, int rollno) : person(name, age), rollno(rollno) {}

    // void getdetails(){
    //     cout<<"Name: "<<name<<endl;
    //     cout<<"Age: "<<age<<endl;
    //     cout<<"Roll No: "<<rollno<<endl;
    // }
};

class gradstudent : public student{
    public:
    string course;

    // gradstudent(string name, int age, int rollno)
    //     : student(name, age, rollno) {}

};

int main(){
    gradstudent s1;
    s1.name = "John"; 
    s1.course = "Computer Science";

    cout << "Name: " << s1.name << endl;
    cout << "Course: " << s1.course << endl;


    return 0;
}