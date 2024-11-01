#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	
  ofstream  File("test.txt");
  string x;
  getline(cin,x);
  File << x;


  File.close();




  return 0;
}