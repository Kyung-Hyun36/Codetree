#include <iostream>
using namespace std;

int main() {
    int front, middle, back;
    char dash;
    cin >> front >> dash >> middle >> dash >> back;

    cout << "010-" << back << dash << middle;

    return 0;
}