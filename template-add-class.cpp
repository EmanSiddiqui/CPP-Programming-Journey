#include<iostream>
using namespace std;

template<typename T, typename U>

class calc {

public:
    T first;
    U second;

    calc(T f, U s) {
        first = f;
        second = s;
    }

    void add() {
        cout << first + second << endl;
    }
};

int main() {
    calc<int, float> obj(10, 5.5);
    obj.add();

    return 0;
}
