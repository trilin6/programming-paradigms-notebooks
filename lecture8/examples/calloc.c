#include <stdio.h>
#include <stdlib.h>
int main(){
    //allocate an array of 20 ints
    int *a = calloc(20, sizeof(int));
    if (a == NULL) exit(1);
    int i;
    for(i = 0; i < 20; i++){
        printf("%d\n",a[i]); // 0 because calloc zeros out allocated memory
    }
    return 0;
}
