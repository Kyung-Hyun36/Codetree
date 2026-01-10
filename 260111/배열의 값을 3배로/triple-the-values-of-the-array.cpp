#include <iostream>
using namespace std;

int main() {
    int matrix_input[3][3];
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> matrix_input[i][j];
            cout << matrix_input[i][j] * 3 << " ";
        }
        cout << '\n';
    }


    return 0;
}