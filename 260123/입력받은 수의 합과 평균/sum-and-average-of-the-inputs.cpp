#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;

        sum += num;
    }

    cout.precision(1);
    cout << fixed << sum << ' ' << (double)sum / n;
    return 0;
}