#include<stdio.h>
int fact(int n);

int main(){
	printf("%d factorial is %d\n", 4, fact(4));
	return 0;
}

int fact(int n) {
	if(n >= 2)                      //recursion test  
		return fact(n-1) *n;        //recursive case

	return n;                       // Base case for n = 0 and n = 1
}
