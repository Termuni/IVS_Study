#include<stdio.h>

int main(){
    int input;
    printf("몇단 구구단을 출력하시겠습니까? ");
    scanf("%d", &input);
    printf("%d단 구구단을 출력합니다.\n", input);
    for(int i = 1; i < 10; ++i){
        printf("%d x %d = %d\n", input, i, input*i);
    }
}