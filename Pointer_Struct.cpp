
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

    pointerStruct = &t1;


    cout << "Pointer is :" << pointerStruct->points << '\n';
    cout << "Age is :" << pointerStruct->age;

   
    return 0;
}
