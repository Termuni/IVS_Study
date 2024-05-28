#include<stdio.h>

int main(void){
    int total = 0;    //누적변수
    for(int i = 1; i <= 10; ++i){
        total += i;
    }
    printf("누적합은 %d\n", total);
    for(int i = 1; i <= 10; ++i){
        if(i == 10){
            printf("10 = %d\n", total);
            break;
        }
        printf("%d + ", i);
    }
    return 0;
}