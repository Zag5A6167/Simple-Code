
#include <iostream>
using namespace std;


struct test
{
    int points;
    int age;
};

int main() {
    
    
    test *pointertestArr[10];

    for (int i = 0; i < 10; i++)
    {
        pointertestArr[i] = new test;
 
    }

    for (int i = 0; i < 10; i++)
    {
        pointertestArr[i]->points = i;
        pointertestArr[i]->age = 10+i;
    }


    for (int i = 0; i < 10; i++)
    {
        cout << pointertestArr[i]->points << " ";
        cout << pointertestArr[i]->age << endl;
    }
    return 0;
}
