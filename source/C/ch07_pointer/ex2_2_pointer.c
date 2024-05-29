#include<stdio.h>
//포인터 변수의 선언
int main(void){
    int a = 1;
    int b = 2;
    int * pointer = &a;   //a의 주소가 pointer라는 포인터 변수에 저장됨
    printf("a의 주소 : %p,\t 값 : %d\n", &a, a);
    printf("b의 주소 : %p,\t 값 : %d\n", &b, b);
    printf("pointer 변수가 가르키는 주소 : %p,\t값 : %d,\t\tpointer의 주소 : %p\n", pointer, *pointer, &pointer);     //*pointer 는 a의 값을 가르킴
    pointer = &b;         //pointer에서 가르키는 주소값을 a에서 b로 변경
    printf("pointer 변수가 가르키는 주소 : %p,\t값 : %d,\t\tpointer의 주소 : %p\n", pointer, *pointer, &pointer);     //*pointer 는 b의 값을 가르킴

}