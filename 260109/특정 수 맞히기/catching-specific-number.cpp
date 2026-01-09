#include <iostream>
using namespace std;

int main() {
    int n = 0;
    
    while(true){
        cin >> n;
        if(n > 25) cout << "Lower\n";
        else if(n < 25) cout << "Higher\n";
        else break;
    }
    
    cout << "Good";

    return 0;
}