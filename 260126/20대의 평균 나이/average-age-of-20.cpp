#include <iostream>
using namespace std;

int main() {
    double sum = 0, cnt = 0;

    while(true){
        int age;
        cin >> age;

        if(age > 29 || age < 20){
            cout.precision(2);
            cout << fixed << sum / cnt;
            break;
        }

        sum += age;
        cnt++;
    }

    return 0;
}