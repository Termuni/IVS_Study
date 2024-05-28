#include<stdio.h>

void NoArgument();  //매개변수가 없는 함수
void Line(int cnt);   //반환 값 없는 함수
void Line40();

int main(){
    Line(50);
    NoArgument();
    Line40();
}

void Line(int cnt){
    for(int i = 0; i < cnt; ++i){
        printf("=");
    }
    puts("");
}

void Line40(){  //같은 이름의 함수는 선언 불가
    for(int i = 0; i < 40; ++i){
        printf("=");
    }
    puts("");

}

void NoArgument(){
    puts("반환값도 매개변수도 없는 함수");
}