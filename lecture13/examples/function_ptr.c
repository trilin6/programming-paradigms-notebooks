#include<stdio.h>

void hello_function(int times);

int main(){
    void (*func_ptr)(int);
    func_ptr=hello_function;
    func_ptr(3);
    return 0;
}

void hello_function(int times){
    for(int i=0;i<times;i++)
        printf("Hello, Function Pointer!\n");
}
