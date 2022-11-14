#include <stdio.h>

int main(){
  int x,y;
  x = 5;
  y = 9;

  int *z = &x;

  z--;
  printf("Before x : %d\n", *z);
  z+=2;
  printf("After  x : %d\n", *z);

  z = &x - 5;
  while(z - &x <10){
    printf("At %p : %d\n", z, *z);
    printf("At %p : %p\n", &z, z);
    z++;
  }
  return 0;
}