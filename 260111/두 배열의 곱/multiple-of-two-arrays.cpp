#include <iostream>
using namespace std;

int main() {
    int matrix_a[3][3], matrix_b[3][3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++) cin >> matrix_a[i][j];
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++) cin >> matrix_b[i][j];
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++) cout <<  matrix_a[i][j] * matrix_b[i][j] << " ";
        cout << '\n';
    }
    
    return 0;
}