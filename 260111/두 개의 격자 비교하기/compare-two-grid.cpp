#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int matrix_a[n][m], matrix_b[n][m];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++) cin >> matrix_a[i][j];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++) cin >> matrix_b[i][j];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++) cout << !(matrix_a[i][j] == matrix_b[i][j]) << " ";
        cout << '\n';
    }

    return 0;
}