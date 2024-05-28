#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//rand() : 0~32767 -> short 난수 발생, 
//난수 발생 전 초기화 작업 <필수>
int main(void){
    srand((unsigned int)time(NULL));    //시간 바탕 난수 초기화
    printf("%d\n", rand() % 45 + 1);    //1~45
    printf("%d\n", rand() % 100);       //0~99
    printf("%d\n", rand() % 101);       //0~100
}