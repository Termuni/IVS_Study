#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(){
    float input, average = 0;
    for(int i = 1; i <= 5; ++i){
        scanf("%f", &input);
        average += input;
        printf("average : %f\n", average/i);  //이렇게 하면 average의 최대 값이 충분한지 고려해야함
    }
    system("pause");
    return 0;
}