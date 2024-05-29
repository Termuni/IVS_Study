#include<stdio.h>

void Swap_ByAddr(int * alpha, int * beta);    //call by reference

int main(void){
    int a = 10, b = 20;
    printf("swap_addr() 호출 전 a주소 = %p, a값 = %d, b주소 = %p, b값 = %d\n", &a, a, &b, b);
    Swap_ByAddr(&a, &b);
    printf("swap_addr() 호출 후 a주소 = %p, a값 = %d, b주소 = %p, b값 = %d\n", &a, a, &b, b);
}

//함수 구현(=함수 정의)
void Swap_ByAddr(int * alpha, int * beta){
    printf("함수 안 a주소 = %p, a값 = %d, b주소 = %p, b값 = %d\n", alpha, *alpha, beta, *beta);
    printf("함수 안 alpha주소 = %p, beta주소 = %p\n", &alpha, &beta);
    
    int temp = *alpha; *alpha = *beta; *beta = temp;

    printf("함수 안 a주소 = %p, a값 = %d, b주소 = %p, b값 = %d\n", alpha, *alpha, beta, *beta);
    printf("함수 안 alpha주소 = %p, beta주소 = %p\n", &alpha, &beta);
}