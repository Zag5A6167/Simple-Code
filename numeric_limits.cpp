
#include <iostream>
#include<limits>
using namespace std;

int main() {
   
    cout << "Check upper and lower limits of int" << endl;
    cout << "--------------------------------------" << endl;
    cout << "max limit of int data type : " << numeric_limits<int>::max() << endl;
    cout << "min limit of int data type : " << numeric_limits<int>::min() << endl;
    cout << "max limit of unsigned int data type : " << numeric_limits<unsigned int>::max() << endl;
    cout << "min limit of unsigned int data type : " << numeric_limits<unsigned int>::min() << endl;
    cout << "max limit of long long data type : " << numeric_limits<long long>::max() << endl;
    cout << "min limit of long long data type : " << numeric_limits<long long>::min() << endl;
    return 0;
}
