#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for(int i = 0; i < 21; i++){
        cout << a / b;
        if(i == 0) cout << '.';
        a = (a % b) * 10;
    }

    return 0;
}