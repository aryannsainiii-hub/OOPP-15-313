#include <iostream>
#include <string>
using namespace std;

class Time {
    int hh,mm,ss;

    public:
    void input(int h , int m , int s){
       hh=h;
       mm=m;
       ss=s;
    }
    void show(){
        cout<<hh<<" "<<mm<<" "<<ss<<endl;
    }
};

int main(){
    Time t1,t2;
    t1.input(10,20,30);
    t2.input(40,50,60);

    t1.show();
    t2.show();

    return 0;
}