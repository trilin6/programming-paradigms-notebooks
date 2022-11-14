#include<stdio.h>
int loop_power( int a, int n );

int main(){
    printf("%d to the power of %d is %d\n", 10, 3, loop_power(10, 3));
	return 0;
}

int loop_power( int a, int n ) {
	int result = 1;
	while (n > 0 ) {
		result = result * a;
		n--;
	}
	return result;
}
