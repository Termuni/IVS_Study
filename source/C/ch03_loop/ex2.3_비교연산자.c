#include<stdio.h>
#include<stdbool.h>
//비교연산자와 함께 삼항연산자 사용 ( ? : )  (조건) ? (조건 참일 때 값) : (조건 거짓일 때 값)
int main(void){
    int n1 = 10, n2 = 5;
    int tf = n1<=n2;
    bool result = n1<=n2;
    printf("%d %s %d 는 %s\n", n1, "<=", n2, result ? "진실" : "거짓");
}