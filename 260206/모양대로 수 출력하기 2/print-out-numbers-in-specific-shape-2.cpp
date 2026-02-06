#include <iostream>
using namespace std;

int main() {
    int n, cnt = 2;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << cnt << ' ';
            cnt += 2;
            if(cnt > 8) cnt = 2;
        }
        cout << '\n';
    }
    return 0;
}