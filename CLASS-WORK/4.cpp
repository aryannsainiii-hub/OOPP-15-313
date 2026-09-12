//
#include <bits/stdc++.h>
using namespace std;

class point {
    private:
    int x , y;

    public:
    point(int a , int b){
        x = a;
        y = b;

    }
    void show(){
        cout<<x<<endl;
        cout<<y<<endl;
    }
};
int main(){
    point p1(10,20);
    p1.show();

    return 0;
}



