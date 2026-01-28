#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    string result = "YES";
    cin >> a >> b >> c;

    for(int i = a; i <= b; i++){
        if(!(i % c)){
            result = "NO";
            break;
        }
    }

    cout << result;

    return 0;
}