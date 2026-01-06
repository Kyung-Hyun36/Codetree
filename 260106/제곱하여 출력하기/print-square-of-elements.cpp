#include <iostream>
using namespace std;

int main() {
    int n;
    int num[n];

    cin >> n;
    for(int i = 0; i < n; i++) cin >> num[i];

    for(int i = 0; i < n; i++) cout << num[i] * num[i] << " ";

    return 0;
}