#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main(){
	srand(time(0));
	
	int n;
	cout << "-------------Guess Number Game ----------\n";
	do{
		int random_number = rand() % 5 + 1;
		cout << "choose number 1-5\n";
		cin >> n;
		if(n == random_number){
			break;
		}
	}while(n != 9);

	cout << "Correct";



	return 0;
}