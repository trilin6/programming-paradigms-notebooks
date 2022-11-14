#include<stdio.h>
int recursive_power( int a, int n );

int main(){
	printf("%d to the power of %d is %d\n", 10, 3, recursive_power(10,3));
	return 0;
}

int recursive_power( int a, int n ) {
	if ( n == 0 )		// termination test
		return 1;	// base case	
	else {			// recursive case 
		return ( a * recursive_power( a, n - 1 ) );
	}
}
