//call by value     -> 값       스네이크 표기법(뱀같아서)
//call by reference -> 주소     카멜 표기법(낙타같아서)

#include<stdio.h>

int Sum(int from, int to);  //함수 선언

int main(void){
    
    //section 1
    int a = 1, b = 100;
    int tot = Sum(a, b);
    printf("%d부터 %d까지의 누적합은 %d입니다\n", a, b, tot);
    //

    //section 2
    a = 10; b = 100;
    tot = Sum(a, b);
    printf("%d부터 %d까지의 누적합은 %d입니다\n", a, b, tot);
    //
}

int Sum(int from, int to){  //함수 정의
    int total = from;
    for(int i = to; i > from; i--){
        total += i;
    }
    return total;
}