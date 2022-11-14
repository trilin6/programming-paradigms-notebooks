#include <stdio.h>
#include <stdlib.h>

void initialize(int *array, int size);

int main(void) {
    int *p = malloc(sizeof(int));
    int values[10];

    *p = 37;
    initialize(values, 10);
    printf("*p = %d\n", *p);
    free(p);

    return 0;
}

void initialize(int *array, int size) {
    for (int i = 0; i <= size; ++i)
        array[i] = 0;
}
