#include<stdio.h>
#include<stdlib.h>
int main(){
    int num = 0;
    //printf("num++ : %d\n", num++);
    printf("++ : %d, -- : %d\n", num++, num--);
    //컴파일러를 매우 잘 아는게 아닌 경우 사용 안 하는걸 권장

    unsigned char num1 = 131;   // 131  : 1000 0011
    char num2= -125;            // -125 : 1000 0011
    printf("%u\n", num1>>5);
    printf("%d\n", num2>>5);

    char num3 = 113;            // 113  : 0111 0001
    char num4 = -15;            // -15  : 1111 0001
    //char num3, num4, num5, num6;
    printf("%d\n", (char)(num3<<2));
    printf("%d\n", (char)(num4<<2));
    printf("%d\n", (char)(num3<<4));
    printf("%d\n", (char)(num4<<4));

    int num5 = -2000;           // -2000 : 1111 1000 0011 0000
    printf("%d\n", num5/256);
    printf("%d\n", num5>>8);
    system("pause");
}