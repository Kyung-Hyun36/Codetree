#include <iostream>
using namespace std;

int main() {
    int num;
    bool result = true;
    
    for(int i = 0; i < 5; i++){
        cin >> num;
        if(num % 3){
            result = false;
            break;
        }
    }

    cout << result;

    return 0;
}