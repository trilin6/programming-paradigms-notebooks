#include <stdio.h>
#include <stdlib.h>
int main(){
    // allocate a 20 int array
    int *a =  malloc(20 * sizeof(int));
    if (a == NULL) exit(1);
    int i;
    for(i = 0; i < 20; i++){
            printf("%d\n",a[i]);
    }
    return 0;
}

