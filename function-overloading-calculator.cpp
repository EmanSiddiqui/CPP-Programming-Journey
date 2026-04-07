#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2, num3;

public:
    Calculator(double x, double y, double z) {
        num1 = x;
        num2 = y;
        num3 = z;
    }

    double add(double x, double y) {
        return x + y;
    }

    double add(double x, double y, double z) {
        return x + y + z;
    }

    double multiply(double x, double y) {
        return x * y;
    }

    double multiply(double x, double y, double z) {
        return x * y * z;
    }

    double subtract() {
        return num1 - num2;
    }

    double divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Division by zero not allowed!" << endl;
            return 0;
        }
    }
};

int main() {
    double x, y, z;

    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    Calculator calc(x, y, z);

    cout << "\nAddition (2 numbers): " << calc.add(x, y) << endl;
    cout << "Addition (3 numbers): " << calc.add(x, y, z) << endl;

    cout << "Multiplication (2 numbers): " << calc.multiply(x, y) << endl;
    cout << "Multiplication (3 numbers): " << calc.multiply(x, y, z) << endl;

    cout << "Subtraction (num1 - num2): " << calc.subtract() << endl;
    cout << "Division (num1 / num2): " << calc.divide() << endl;

    return 0;
}