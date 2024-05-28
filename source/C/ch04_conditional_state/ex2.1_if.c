#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    srand((unsigned int)time(NULL));
    int num = rand() % 6 + 1;
    if(num == 1){
        puts("주사위 1");
    }
    else if(num == 2){
        puts("주사위 2");
    }
    else if(num == 3){
        puts("주사위 3");
    }
    else if(num == 4){
        puts("주사위 4");
    }
    else if(num == 5){
        puts("주사위 5");
    }
    else if(num == 6){
        puts("주사위 6");
    }
}