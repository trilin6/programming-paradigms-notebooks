#include<stdio.h>
void print_even_total(int *b);

int main(){
        int a[5]={1,2,3,4,5};
        print_even_total(a);
        return 0;
}

/* Sum up every other number in the array */
void print_even_total(int *b) {
        int c=0;
        for(int i=0;i<15;i++) {
                c+=b[i];
                i++;
        }
        printf("%d\n",c);
}
