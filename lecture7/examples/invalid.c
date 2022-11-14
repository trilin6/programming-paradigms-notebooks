#include<stdio.h>
int main() {
	int *p;
	int i = 5;
	int j = 20;
	p = &i;
	printf("%d %d\n", p[0], p[1]);
return 0;
}
