#include<stdio.h>
#include<stdlib.h>

#define MAXLINE 100
#define INCREASE 3

int getline2(char line[], int max);

int main(){
    int *ip;
    int array_size = 2;
    int nitems = 0;
    char line[MAXLINE];
    ip = malloc(array_size * sizeof(int));
    while( getline2(line, MAXLINE) != 'q' ) {
        if(nitems >= array_size ) {/* increase allocation */
            int *newp;
            array_size += INCREASE ;
            newp = realloc(ip, array_size * sizeof(int));
            printf("<< Expanding by %d to size %d >>\n", INCREASE, array_size ) ;
            if(newp == NULL) {
                printf("out of memory\n");
                exit(1);
            }
            ip = newp;
        }
        ip[nitems++] = atoi(line);
    }
    return 0;
}

int getline2(char line[], int max) {
    int nch = 0;
    int c;
    max = max - 1;/* leave room for '\0' */
    while((c = getchar()) != 'q') {
        if(c == '\n')
            break;
        if(nch < max) {
            line[nch] = c;
            nch = nch + 1;
        }
    }
    if(c == 'q' && nch == 0)
        return 'q';

    line[nch] = '\0';
    return nch;
}
