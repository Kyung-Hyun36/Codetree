#include <iostream>
using namespace std;

int main() {
    int a, b, sum = 0, cnt = 0;
    cin >> a >> b;

    for(int i = a; i <= b; i++){
        if(!(i % 5) || !(i % 7)){
            sum += i;
            cnt++;
        }
    }

    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << (double)sum / cnt;

    return 0;
}