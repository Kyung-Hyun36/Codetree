#include <iostream>
using namespace std;

int main() {
    int n, result = 2, x = 1;
    cin >> n;

    while(true){
        if(result == n) break;

        result *= 2;
        x++;
    }

    cout << x;

    return 0;
}