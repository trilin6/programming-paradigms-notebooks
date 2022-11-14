#include<stdio.h>
int i=2;
void foo(int j);

int main(){
	printf("i at the top of main = %d\n",i);
        foo(3);
	if (i==2) {
		i=4;
		printf("i in the if block = %d\n",i);
	}
	printf("i after the code block = %d\n",i);

	return 0;
}

void foo(int j){
	int i=3;
	printf("i in the function = %d\n", i);
}
