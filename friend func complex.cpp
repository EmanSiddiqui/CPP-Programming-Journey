#include<iostream>
using namespace std;

class Complex {
	public:
    int real;
    int img;

public:
    Complex(int r, int i) {
        real = r;
        img = i;
    }

   Complex operator+(Complex c) {
    Complex temp(0, 0);
    temp.real = real + c.real;
    temp.img  = img + c.img;
    return temp;
}
};

// friend function definition


int main() {
    Complex C1(2, 4);
    Complex C2(2, 3);

    Complex C3 = C1 + C2;

    cout << C3.real<< " + i" << C3.img<< endl;

    return 0;
}
