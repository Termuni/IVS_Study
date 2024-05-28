//Call By Reference -> 해당 값의 주소값을 전달해주는 함수

#include<stdio.h>

void Sum(int from, int to, int * total);  //함수 선언

int main(void){
    
    //section 1
    int a = 1, b = 100, tot;
    Sum(a, b, &tot);    //tot의 주소값을 전달
    printf("%d부터 %d까지의 누적합은 %d입니다\n", a, b, tot);
    //

    //section 2
    // a = 10; b = 100; tot = 0;
    // Sum(a, b, &tot);
    // printf("%d부터 %d까지의 누적합은 %d입니다\n", a, b, tot);
    //
}

void Sum(int from, int to, int * total){  //함수 정의
    *total = 0; //포인터를 통해 주소를 찾아서 주소에 있는 값을 바꾸는 것
    printf("total의 주소값 : %d\n", total);
    printf("total의 값 : %d\n", *total);
    for(int i = to; i >= from; i--){
        *total += i;
    }
}