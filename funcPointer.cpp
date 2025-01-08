#include <iostream>
#include <set>
#include <cctype>
#include<cmath>
#include<typeinfo>
#include<vector>
#include<algorithm>
#include<utility>
#include<string>
using namespace std;


#define F first
#define S second
#define ll long long
#define nl "\n"
#define PB push_back


class Solution {
public:
    void ptr(int *p){
            *p = 10;
    }
};


int main() {    
    ios::sync_with_stdio(0);
    cin.tie(0);
   

    int a = 0;
    int *p = &a;
    cout << "before\n";
    cout << a << '\n';
    Solution sol;
    sol.ptr(p);
    cout << "after\n";
    cout << a;


        return 0;
}