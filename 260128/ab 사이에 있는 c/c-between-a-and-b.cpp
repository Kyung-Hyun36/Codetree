#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    string result = "NO";
    cin >> a >> b >> c;

    for(int i = a; i <= b; i++){
        if(!(i % c)){
            result = "YES";
            break;
        }
    }

    cout << result;

    return 0;
}