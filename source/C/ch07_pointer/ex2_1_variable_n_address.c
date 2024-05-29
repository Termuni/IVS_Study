#include<stdio.h>
//변수와 주소값 확인하기
int main(void){
    int a = 1, b = 2;
    char * str_pointer = "Hello";
    char str_array[] = "Hello";
    
    printf("a변수 주소 : %p, 변수값 : %d\n", &a, a);
    printf("b변수 주소 : %p, 변수값 : %d\n", &b, b);
    printf("str_pointer 주소 : %p, 문자열 주소 : %p, 문자열 내용 : %s\n", &str_pointer, str_pointer, str_pointer);   //str_pointer의 주소와 문자열의 주소
    printf("str_array 주소 : %p, 문자열 주소 : %p, 변수값 : %s\n", &str_array, str_array, str_array);
    
    puts("------------변수 수정-------------");

    a = 10; b = 20; str_pointer = "Hi";
    str_array[1] = 'i'; for(int i=2; i<=5; ++i) str_array[i] = '\0';

    printf("a변수 주소 : %p, 변수값 : %d\n", &a, a);
    printf("b변수 주소 : %p, 변수값 : %d\n", &b, b);
    printf("str_pointer 주소 : %p, 문자열 주소 : %p, 문자열 내용 : %s\n", &str_pointer, str_pointer, str_pointer);   //str_pointer의 주소와 문자열의 주소
    printf("str_array 주소 : %p, 문자열 주소 : %p, 변수값 : %s\n", &str_array, str_array, str_array);
}