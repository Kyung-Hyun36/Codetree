#include <iostream>
using namespace std;

int main() {
    int a;
    string result;
    
    cin >> a;

    if(a % 13 == 0 || a % 19 == 0) result = "True";
    else result = "False";

    cout << result;

    return 0;
}