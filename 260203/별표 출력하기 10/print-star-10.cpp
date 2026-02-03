#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n * 2 + 1, 0);

    for(int i = 2; i < arr.size(); i += 2) arr[i] = n--;

    for(int i = 1; i < arr.size(); i += 2) arr[i] = ++n;

    for(int i = 1; i < arr.size(); i++){
        for(int j = 1; j <= arr[i]; j++){
            cout << "* ";
        }
        cout << '\n';
    }
    
    return 0;
}