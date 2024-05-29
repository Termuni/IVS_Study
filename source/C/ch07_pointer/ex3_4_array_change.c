#include<stdio.h>

//1. return 없이
//void ChangeArray(int a[3])    -> 무조건 3개짜리 배열만 받음
//void ChangeArray(int a[]);
void ChangeArray(int * ptr);    //-> 개수 상관없이 받을 수 있음


int main(void){
    int arr[] = {10, 20, 30};
    ChangeArray(arr);
    for(int idx = 0; idx < sizeof(arr)/sizeof(int); ++idx){
        printf("arr[%d] = %d\n", idx, *(arr+idx));
    }
    printf("%p\n", arr);
}

//함수 호출 시 arr의 주소 시작값을 ptr이 받음
//즉 ptr도 arr의 시작점을 가르킴
void ChangeArray(int * ptr){
    ptr[1] = 99;
    *(ptr + 1) = 99;
    //위 두개의 식은 같은 결과를 만들게 된다
}