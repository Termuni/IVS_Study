#include<stdio.h>
//score 입력 받아 학점 출력
int main(void){
    int score;
    printf("점수을 입력하세요 : ");
    scanf("%d", &score);
    int tempScore = score == 100 ? 99 : score;
    switch (tempScore/10)
    {
        case 9: 
            puts("A학점");
            break;
        case 8: 
            puts("B학점");
            break;
        case 7:
            puts("C학점");
            break;
        case 6:
            puts("D학점");
            break;
        case 5: case 4: case 3: case 2: case 1: case 0:
            puts("F학점");
            break;
        default:
            puts("유효하지 않은 점수입니다.");
            break;
    }
}