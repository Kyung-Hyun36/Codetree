#include <iostream>
using namespace std;

int main() {
    string word[10];
    
    for(int i = 0; i < 10; i++) cin >> word[i];

    for(int i = 9; i >= 0; i--) cout << word[i];

    return 0;
}