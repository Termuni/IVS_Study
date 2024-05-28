#include<stdio.h>

int main(void){
    int mini, maxi;
    printf("구구단을 몇단부터 몇단까지 출력할지 최소 구구단수와 최대 구구단수를 입력하세요 : ");
    scanf("%d %d", &mini, &maxi);
    for(int i = 1; i <= 9; ++i){
        for(int j = mini; j <= maxi; ++j){
            printf("%d x %d = %d\t", j, i, j * i);
        }
        puts("");
    }
}