#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n * 2 + 1; i++){
        if(i % 2){
            for(int j = 1; j <= n * 2 + 1; j++){
                cout << "* ";
            }
        }else{
            for(int j = 1; j <= n + 1; j++){
                cout << "*   ";
            }
        }
        cout << '\n';
    }

    return 0;
}