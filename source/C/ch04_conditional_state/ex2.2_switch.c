#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    srand((unsigned int)time(NULL));
    int num = rand() % 6 + 1;
    switch (num)
    {
        case 1:
            puts("주사위 1");
            break;
        case 2:
            puts("주사위 2");
            break;
        case 3:
            puts("주사위 3");
            break;
        case 4:
            puts("주사위 4");
            break;
        case 5:
            puts("주사위 5");
            break;
        case 6:
            puts("주사위 6");
            break;
        default:
            puts("잘못된 주사위 숫자 출력중");
            break;
    }
    
}