#include <stdio.h>
#include "foo.h"
 
int main(void){
    printf("This is a shared library test...\n");
    foo();
    return 0;
}
