#include <iostream>
using namespace std;

template <typename T1, typename T2>
auto add(T1 a, T2 b)
{
    return a + b;
}

int main()
{
    int x = 10;
    double y = 3.5;

    auto result1 = add(x, y);     // int + double ? double
    auto result2 = add(5, 7);     // int + int ? int
    auto result3 = add(2.2, 1.8); // double + double ? double

    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
    cout << "Result 3: " << result3 << endl;

    return 0;
}

