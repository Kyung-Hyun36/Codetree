#include <iostream>
using namespace std;

int main() {
    int mass = 13;
    double gravity = 0.165;

    cout.precision(6);
    cout << fixed << mass << " * " << gravity << " = " << mass * gravity;
    return 0;
}