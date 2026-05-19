#include<iostream>
using namespace std;

class Vector {
public:
    double x;
    double y;

    Vector(double a, double b) {
        x = a;
        y = b;
    }

    friend Vector operator+(const Vector &obj1, const Vector &obj2);
    friend ostream& operator<<(ostream& out, const Vector& v);
};

Vector operator+(const Vector &obj1, const Vector &obj2) {
    return Vector(obj1.x + obj2.x, obj1.y + obj2.y);
}

ostream& operator<<(ostream& out, const Vector& v) {
    out << "(" << v.x << ", " << v.y << ")";
    return out;
}

int main() {
    Vector v1(2.0, 3.5), v2(1.5, 1.0);

    Vector v3 = v1 + v2;

    cout << "v1 = " << v1 << endl;
    cout << "v3 = " << v3 << endl;

    return 0;
}
