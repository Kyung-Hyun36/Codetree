#include <iostream>
using namespace std;

int main() {
    double sight_left, sight_right;
    cin >> sight_left >> sight_right;

    if(sight_left >= 1.0 && sight_right >= 1.0) cout << "High";
    else if(sight_left >= 0.5 && sight_right >= 0.5) cout << "High";
    else cout << "Low";
    
    return 0;
}