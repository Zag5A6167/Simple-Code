
#include <iostream>
using namespace std;


struct test
{
    int points;
    int age;
};

int main() {
    test t1;
    t1.points = 10;
    t1.age = 25;

    test *pointerStruct;
    test **superPointerStruct;
    pointerStruct = &t1;

    superPointerStruct = &pointerStruct;
    
    cout << (*superPointerStruct)->points << "\n";
    cout << (**superPointerStruct).points << "\n";
    cout << (*superPointerStruct)->age << "\n";
    cout << (**superPointerStruct).age << "\n";
    return 0;
}
