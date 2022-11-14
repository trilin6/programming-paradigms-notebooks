#include<stdio.h>
int fib(int n);

int main(){
	printf("%d!=%d\n", 4, fib(4));
	return 0;
}


int fib(int n) {
if(n >= 2)						//recursion test  
	return fib(n-1) + fib(n-2);	//recursive case

	return n;					// Base case for n = 0 and n =1
}
