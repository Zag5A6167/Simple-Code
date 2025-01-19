
#include <iostream>

using namespace std;

int main() {
   
    string s = "abcd";

    for(int i = 1; i <= 5; i++){
        cout << i << (i < 5 ? " " : "\n");
    }

    return 0;
}
