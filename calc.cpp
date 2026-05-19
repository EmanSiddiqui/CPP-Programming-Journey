#include<iostream>
using namespace std;

template<typename T1, typename T2>
auto calculator(T1 x, T2 y) {
    char op;

    cout << "Enter operator (+ - * /): ";
    cin >> op;

    switch(op) {
        case '+':
            return x + y;

        case '-':
            return x - y;

        case '*':
            return x * y;

        case '/':
            return x / y;

        default:
            cout << "Invalid operator!";
            return 0;
    }
}

int main() {
    cout << calculator(10, 5);
    return 0;
}
