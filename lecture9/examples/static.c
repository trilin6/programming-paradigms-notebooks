#include<stdio.h>

// scope inside a single source file
int a = 10;		     // global & static
static int c = 1;	 // file & static

void foo();

int main(){
	printf("in main: a = %d c = %d\n", a, c);
	foo();
	printf("in main: a = %d c = %d\n", a, c);
	foo();
	printf("in main: a = %d c = %d\n", a, c);
	foo();
	return 0;
}

void foo(){
	int tmp = 3;	       // local automatic
	static int count = 0 ; // local static
	a = a + tmp;
	count++;
	printf("in foo : tmp = %d count = %d\n", tmp, count);
}
