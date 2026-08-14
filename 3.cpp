// Develop a program to demonstrate parameter passing techniques (call by value, call by refrence and call by address)
// Analyze their effects on variable modification. Swapping of two numbers.
#include<bits/stdc++.h>
using namespace std;

void swapbyrefrence(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swapbyvalue(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swapbyaddress(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<"Before swapping: x="<<x<<" y="<<y<<endl;
    swapbyvalue(x,y);
    cout<<"After by value: x="<<x<<" y="<<y<<endl;
    swapbyrefrence(x,y);
    cout<<"After by reference: x="<<x<<" y="<<y<<endl;
    swapbyaddress(&x,&y);
    cout<<"After by address: x="<<x<<" y="<<y<<endl;
    return 0;
}