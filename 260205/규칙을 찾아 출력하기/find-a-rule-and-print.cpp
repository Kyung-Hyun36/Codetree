#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) cout << "* ";

    cout << '\n';

    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "* ";
            if(j == i - 1){
                for(int k = 1; k <= n - i; k++){
                   cout << "  ";  
                }
            } 
        }
        cout << '\n';
    }

    

    return 0;
}