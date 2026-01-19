#include <iostream>
using namespace std;

int main() {
    int age1, age2;
    char gen1, gen2;
    cin >> age1 >> gen1 >> age2 >> gen2;

    if(age1 >= 19 || age2 >= 19) cout << (gen1 == 'M' || gen2 == 'M');
    else cout << 0;

    return 0;
}