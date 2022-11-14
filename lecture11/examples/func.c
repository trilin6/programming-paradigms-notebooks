#include"func.h"
int cost;

int compute_cost(int q) {
	return q * cost;
}

void set_cost(int val){
	cost=val;
}
