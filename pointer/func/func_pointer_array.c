#include <stdio.h>

int add(int a, int b) {return a + b; }
int substract(int a, int b) {return a - b ;}

void menu(){
    printf("1. Add\n2. Subtract\n3. Exit\n");
}


int main(){

    int choice;
    int (*operations[])(int, int) = {add, substract};

    while (1){
        menu();
        scanf("%d", &choice);
        if(choice == 3) {
            break;
        }

         printf("Result: %d\n", operations[choice - 1](10, 5));
    }
    


    return 0;
}