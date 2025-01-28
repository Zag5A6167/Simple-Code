#include <iostream>
using namespace std;




int main() {
    
    int x = 10;
    int *p = &x;
    int **dp = &p;
    int ***tp = &dp;
    
    
    cout << ***tp;

   
    return 0;
}
