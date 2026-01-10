#include <iostream>
using namespace std;

int main() {
    int matrix[4][4], sum = 0;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin >> matrix[i][j];

            if(j <= i) sum += matrix[i][j];
        }
    }

    cout << sum;

    return 0;
}