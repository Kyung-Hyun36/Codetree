#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;

    while(true){
        n /= ++cnt;
        if(n <= 0){
            cout << cnt;
            break;
        }
    }

    return 0;
}