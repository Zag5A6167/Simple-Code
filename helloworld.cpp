#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1); // Seed สำหรับ Random Generator

    int n = rnd.next(1, 100); // สุ่มค่า n ระหว่าง 1 ถึง 100
    cout << n << endl;

    return 0;
}