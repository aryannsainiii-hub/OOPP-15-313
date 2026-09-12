#include<bits/stdc++.h>
using namespace std;

class teacher{
    private:
        double salary;

public:
        //non-parameterized constructor

    // teacher(){ //constructor
    //     cout<<"Constructor is called"<<endl;
    //     dept="CSE";
    // }

    //     //parameterized constructor
    //     teacher(string n , string d, string s, double sal){ //constructor
    //     name=n;
    //     dept=d;
    //     subject=s;
    //     salary=sal;
    // }

            //parameterized constructor
        teacher(string name , string dept, string subject, double salary){ //constructor
        this->name=name;
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
    }



    //properties
    string name;
    string dept;
    string subject;

    //methods
    void changedept(string newdept){
        dept=newdept;
    }

    //setter and getter methods

    void setsalary(double s){
        salary=s;
    }

    double getsalary(){
        return salary;
        }

        void showdetails(){
            cout<<"Name: "<<name<<endl;
            cout<<"Department: "<<dept<<endl;
            cout<<"Subject: "<<subject<<endl;
            cout<<"Salary: "<<salary<<endl;
        }

        ~teacher(){ //destructor
            cout<<"Destructor is called"<<endl;
            // delete this; //deletes the object from memory
        }

            teacher(teacher &t){ //copy constructor
                name = t.name;
                dept = t.dept;
                subject = t.subject;
                salary = t.salary;
            }
        };


class account{
    private:
        double balance; 
        string password; //data hiding

        public:
        string accountid;
        string username;
};
int main(){
    teacher t1("jhon", "cse", "oopp", 25000); //constructor is called automatically when object is created
    t1.showdetails();

    // teacher t2(t1); //copy constructor is called automatically when object is created
    // t2.showdetails();

    return 0;
}
