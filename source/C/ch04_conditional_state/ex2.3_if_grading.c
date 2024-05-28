#include<stdio.h>
//score 입력 받아 학점 출력
int main(void){
    int score;
    printf("점수을 입력하세요 : ");
    scanf("%d", &score);
    if((score >= 90) && (score <= 100)){
        puts("A학점");
    }else if((score >= 80) && (score < 90)){
        puts("B학점");
    }else if((score >= 70) && (score < 80)){
        puts("C학점");
    }else if((score >= 60) && (score < 70)){
        puts("D학점");
    }else if((score >= 0) && (score < 60)){
        puts("F학점");
    }else{
        puts("유효하지 않은 점수입니다.");
    }
}