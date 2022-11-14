#include <stdio.h>

int main() {
    char a[] = "Hello Worlds";
    char *b;
    printf("The fourth character of %s is %c\n", a, a[4]);
    printf("The fourth character of %s is %c\n", a, *(a+4));
    printf("The fourth character of %s is %c\n", a, 4[a]);
    b=a;
    b=b+4;
    printf("The fourth character of %s is %c\n", a, *b);
    return 0;
}
