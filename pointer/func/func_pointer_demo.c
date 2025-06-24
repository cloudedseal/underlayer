#include <stdio.h>

int add(int a, int b) {return a + b; }
int substract(int a, int b) {return a - b ;}

int perform_operations(int a, int b, int (*op)(int, int)) {
    return op(a, b);
}

int main(){
    
    // call function via the pointer
    printf("5 + 3 = %d\n", operation(5, 3, add));

    printf("5 - 3 = %d\n", operation(5, 3, substract));

    return 0;
}