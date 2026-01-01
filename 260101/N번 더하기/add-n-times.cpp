#include <iostream>
using namespace std;

int main() {
    int A, N;
    cin >> A >> N;

    int result = A + N;

    for(int i = 0; i < N; i++){
        cout << result << "\n";
        result += N;
    }

    return 0;
}