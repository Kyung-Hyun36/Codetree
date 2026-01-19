#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    (a < 10 || a > 20) ? cout << "yes" : cout << "no";

    return 0;
}