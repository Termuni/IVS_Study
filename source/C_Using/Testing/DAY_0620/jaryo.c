#include<stdio.h>
#include<stdlib.h>

int main(){
    char num1 = -10;
    //1byte 부호 있는 정수형으로 변수 선언 값 할당
    short num2 = 30000;
    //2byte 부호 있는 정수형으로 변수 선언 값 할당
    int num3 = -1234567890;
    //4byte 부호 있는 정수형으로 변수 선언 값 할당
    long num4 = 1234567890;
    //4byte 부호 있는 정수형으로 변수 선언 값 할당
    long long num5 = -1234567890123456789;
    //8byte 부호 있는 정수형으로 변수 선언 값 할당

    printf("%d %d %d %ld %lld\n",num1,num2,num3,num4,num5);
    system("pause");
    return 0;
}