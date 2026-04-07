#include <iostream>
using namespace std;

class Vector {
private:
    int x, y;

public:
    Vector(int a, int b) {
        x = a;
        y = b;
    }
				Vector operator+(Vector v) {
        return Vector(x + v.x, y + v.y);
    }
				Vector operator-(Vector v) {
        return Vector(x - v.x, y - v.y);
    }
				void display() {
        cout << "(" << x << ", " << y << ")";
    }
};

int main() {
    Vector v1(5, 3);
    Vector v2(2, 1);
				Vector sum = v1 + v2;
    Vector diff = v1 - v2;
				cout << "Sum: ";
    sum.display();
				cout << "\nDifference: ";
    diff.display();

    return 0;
}