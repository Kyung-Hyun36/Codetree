#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    char rank;

    if (N >= 90) rank = 'A';
    else if (N >= 80) rank = 'B';
    else if (N >= 70) rank = 'C';
    else if (N >= 60) rank = 'D';
    else rank = 'F';

    cout << rank;

    return 0;
}