#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = n; i > 0; i--){
        for(int j = i * i; j > 0; j--){
            cout << "*";
            if(j % i == 1) cout << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}