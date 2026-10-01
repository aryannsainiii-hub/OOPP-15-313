#include<iostream>
using namespace std;

class emp{
    public:
    emp(){
        cout<<"employee constructor"<<endl;
    }
};

class man{
};

class director:public man{
    public:
    director(){
        cout<<"director constructor "<<endl;
    }
};

int main(){
    // man m;
    //emp e;
    //director d;
    return 0;
}