#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], sum[3][3], mul[3][3];

    cout << "Enter elements of Matrix A (3x3):\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> A[i][j];

    cout << "Enter elements of Matrix B (3x3):\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> B[i][j];

    // Addition
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            sum[i][j] = A[i][j] + B[i][j];

    // Multiplication
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            mul[i][j] = 0;
            for(int k = 0; k < 3; k++) {
                mul[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output
    cout << "\nSum of matrices:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    cout << "\nProduct of matrices:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            cout << mul[i][j] << " ";
        cout << endl;
    }

    return 0;
}
