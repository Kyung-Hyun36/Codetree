#include <iostream>
using namespace std;

int main() {
    while(true){
        int width, height;
        char c;

        cin >> width >> height >> c;

        cout << width * height << '\n';

        if(c == 'C') break;
    }

    return 0;
}