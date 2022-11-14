#include <stdio.h>
extern int cost;

int compute_cost(int q);
int main() {
	cost = 5;
	printf("cost = %d\n", compute_cost(3));
	return 0;
}
