#include <iostream>
using namespace std;

class complex {
private:
	int real,img;

public:
	 complex(int r = 0 , int i = 0) : real{r} ,img{i} {}

     void show() {
        cout<< "Real: " << real << ", Imaginary: " << img << endl;
}

    complex operator+(const complex& other) {
        return complex(real + other.real, img + other.img);
    }
};

int main() {
    complex c1(2, 3);
    complex c2(4, 5),c3;
    c3 = c1 + c2; 
    c3.show(); 
	return 0;
}
