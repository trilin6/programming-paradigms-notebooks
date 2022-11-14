#include<stdlib.h>
#include<stdio.h>
int main(){
    int i, *p;
    for(i=0; i<1000; i++){
        p = malloc(sizeof(int));
        if (p == NULL){
            printf("Could not allocate more memory!");
            exit(1);
        }
        *p = i;
    }
    return 0;
}
