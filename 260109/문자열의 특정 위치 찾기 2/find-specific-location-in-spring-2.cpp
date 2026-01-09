#include <iostream>
#include <vector>
using namespace std;

int main() {
    char letter;
    vector<string> arr = {"apple", "banana", "grape", "blueberry", "orange"};
    int cnt = 0;

    cin >> letter;

    for(string s : arr){
        if(s[2] == letter || s[3] == letter){
            cout << s << '\n';
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}