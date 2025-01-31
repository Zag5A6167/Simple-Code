#include<stdio.h>


void towerOfHanoi(int n,char s,char d,char a){
	if(n == 1){
		printf("move dish 1 from %c to %c\n",s,d);
	}else{
		towerOfHanoi(n-1,s,a,d);
		printf("move dish %d from %c to %c\n",n,s,d);
		towerOfHanoi(n-1,a,d,s);
	}
}

int main(){

	int n;
	scanf("%d",&n);

	towerOfHanoi(n,'a','b','c');

	return 0;

}