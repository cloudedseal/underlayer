#include <stdio.h>

int add(int a, int b) {return a + b; }
int substract(int a, int b) {return a - b ;}

int main(){
    // declare a function pointer
    int (*operation)(int, int);

    // set address of a function
    operation = &add;

    // call function via the pointer
    printf("5 + 3 = %d\n", operation(5, 3));

    operation = substract;
    printf("5 - 3 = %d\n", operation(5, 3));

    return 0;
}