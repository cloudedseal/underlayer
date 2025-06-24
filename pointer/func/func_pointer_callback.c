#include <stdio.h>
#include <unistd.h>

void on_timer_tick(void (*callback)()) {
    while (1){
        sleep(1);
        callback();
    }
    
}

void say(){
    printf("hello callback\n");
}

int main(){
    
    on_timer_tick(say);

    return 0;
}