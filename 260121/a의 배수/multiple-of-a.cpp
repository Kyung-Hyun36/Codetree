#include <iostream>
using namespace std;

int main() {
    int n, a, num = 1;
    cin >> n >> a;

    while(num <= n){
        cout << (!(num++ % a)) << '\n';
    }
    return 0;
}