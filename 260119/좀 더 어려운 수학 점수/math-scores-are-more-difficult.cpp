#include <iostream>
using namespace std;

int main() {
    int am, ae, bm, be;
    cin >> am >> ae >> bm >> be;

    if(am == bm) (ae > be) ? cout << 'A' : cout << 'B';
    else (am > bm) ? cout << 'A' : cout << 'B';

    return 0;
}