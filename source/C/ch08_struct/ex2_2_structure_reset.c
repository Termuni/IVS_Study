#include<stdio.h>
//이와 같이 변수들처럼 사용 가능

struct student {
    int num;
    double grade;
};

int main(void){
    //int i = 1; 과 같이 선언하자마자 초기화 하는 법
    struct student s1 = {101, 3.79};
    printf("학번 = %d, 학점 = %.2lf\n", s1.num, s1.grade);
    //printf("%d",sizeof(s1)); -> 16byte로 나옴
}