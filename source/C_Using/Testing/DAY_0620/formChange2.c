#include<stdio.h>
#include<stdlib.h>
int main(){
    char s8_1 = 0, s8_2 = 0;
    short s16_1 = 32767;
    int s32_1 = -1;
    unsigned int u32_1 = 1u;
    printf("1. %d\n", sizeof(s8_1 + s8_2)); // char 사이즈끼리의 더하기 -> 사이즈가 4 나옴, 알아서 int로 바꿔서 연산
    printf("1-1. %d\n", sizeof(s8_1));      // size => 1 
    printf("1-2. %d\n", sizeof((double)s8_2)); // size => 8
    printf("2. %d, %d, %u\n", sizeof(32767 * 100000), 32767*100000, 32767*100000);
    printf("3. %d, %u\n", -1, -1);
    if(s32_1 < u32_1){
        printf("4. s32_! < u32_1 is true\n");
    }
    else{   //signed와 unsigned 간의 연산 -> 부호 없는 쪽으로 연산하게 됨
        printf("4. s32_! < u32_1 is false\n");
    }
    system("pause");
    return 0;
}