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
    void printZero(int row,int col){
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    cout << "0 ";
                }
                cout << '\n';
            }
    }
};


int main() {    
    
   
    int row,col;
    cin >> row;
    cin >> col;

    Solution sol;
    sol.printZero(row,col);

    return 0;
}