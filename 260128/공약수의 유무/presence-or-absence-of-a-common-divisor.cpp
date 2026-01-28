#include <iostream>
using namespace std;

int main() {
    int a, b;
    bool result = false;
    cin >> a >> b;

    for(int i = a; i <= b; i++){
        if(!(1920 % i) && !(2880 % i)){
            result = true;
            break;
        }
    }

    cout << result;
    
    return 0;
}