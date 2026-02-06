#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 11; i < 10 + n * 2; i += 2){
        for(int j = i; j < i + n * 2; j += 2) cout << j << ' ';
        cout << '\n';
    }
    
    return 0;
}