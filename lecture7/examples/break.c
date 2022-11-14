#include <stdlib.h>
#include <stdio.h>

int main(){

  int x = 1;
  int *p = &x;
  int i = 1;

  while(-1){

    p++;
    
    // write a value
    *p = rand();
//     *p = 1234;
    
    printf("%d : so far so good. Content of %p is %d\n", i, p, *p);
    i++;
  }
  
  return 0;
}