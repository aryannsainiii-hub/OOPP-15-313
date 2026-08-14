#include<iostream>
#include<string>
using namespace std;

class student{
    private:
    string name;
    string branch;
    int rollno;
    float marks[5];
    float totalmarks;
    float percentage;

    public:
    student(){
        totalmarks = 0.0;
        percentage = 0.0;
    }
    void input(){
        getline(cin>>ws,name);
        getline(cin>>ws,branch);
        cin>>rollno;

        for(int i = 0; i<5;++i){
            cin>>marks[i];
        }
    }
    void calculation(){
        totalmarks =0;
        for ( int i=0;i<5;++i){
            totalmarks+=marks[i];
        }
        percentage = (totalmarks/500.0)*100.0;
    }
    float gettotalmarks() const {return totalmarks;}
    float getpercentage() const {return percentage;}

};
int main(){
    student student1;

    student1.input();
    student1.calculation();

    return 0;
}
