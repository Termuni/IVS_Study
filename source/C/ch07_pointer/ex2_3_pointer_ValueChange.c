#include<stdio.h>

int main(void){
    int a = 1, b = 2;
    int * pointer;
    pointer = &a;
    *pointer *= 3;  //pointer가 가르키는 값 = pointer가 가르키는 값 * 3
    //이후 a값은?
    pointer = &b;
    *pointer *= 3;  //이 동작에서 바뀌는 건 a? b? pointer?
    printf("a변수 : %d\n", a);
    printf("b변수 : %d\n", b);

    printf("pointer 변수가 가르키는 주소 : %p, 값 : %d\n", pointer, *pointer);
    
    printf("a변수 주소 : %p\n", &a);
    printf("b변수 주소 : %p\n", &b);

    //배열과 포인터는 매우 비슷하므로 포인터로 배열 접근 가능
}