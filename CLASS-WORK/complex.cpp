#include<bits/stdc++.h>
using namespace std;

// class comp{
//     int real;
//     int img;

//     public:

//     comp(int r=0, int i=0):real{r},img{i}{}

//     comp operator+(const comp& other) const{
//         return comp(real + other.real, img + other.img);
//     }

//     void show(){
//         cout<<real<<","<<img<<endl;
//     }
// };

// class comp{
//     int real;
//     int img;

//     public:
//     comp(int r=0, int i=0): real{r}, img{i}{};

//     //1sttt way

//     // comp operator + (const comp& c) const{
//     //     return comp(this->real + c.real, this->img + c.img);
//     // }

//      // 2nd wayyyy
// //   comp operator + (const comp& c) const{
// //         return comp(real + c.real, img + c.img);
// //     }

//     //3rd wayyy

//     comp operator+(const comp& c) const{
//         int r = this->real + c.real;
//         int i = this->img + c.img;
//         comp t(r, i);
//         return t;
//     }


//     void show() const{
//         cout << real << "," << img << endl;
//     }
// };


class comp{
    int real;
    int img;

    public:
    comp(int r = 0, int i = 0) : real{r}, img{i} {}

    friend comp operator+(const comp& c, const comp& d);

    void show() const{
        cout << real << "," << img << endl;
    }
};

comp operator+(const comp& c, const comp& d){
    return comp(c.real + d.real, c.img + d.img);
}


int main(){
    comp c(5,20);
    comp d;

    c.show();
    d.show();
    comp c3 = c + d;
    c3.show();
}