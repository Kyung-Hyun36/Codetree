#include <iostream>
using namespace std;

int main() {
    int sum = 0, cnt = 0;

    for(int i = 0; i < 10; i++){
        int num;
        cin >> num;

        if(num >= 0 && num <= 200){
            sum += num;
            cnt++;
        }
    }

    cout.precision(1);
    cout << fixed << sum << ' ' << (double)sum / cnt;

    return 0;
}