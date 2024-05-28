#include<stdio.h>
#include<time.h>
#include<stdlib.h>

// 1 Level : 1~4
// 2 Level : 5~8
// 3 Level : 9~12
// 중간에 실패시 종료
// 3레벨 모두 성공시 성공 메시지 출력

int GetRandomNumber(int level);
void ShowQuestion(int level, int num1, int num2);

int main(void){
    int level = 1;
    srand((unsigned int)time(NULL));
    ShowQuestion(level, GetRandomNumber(level), GetRandomNumber(level));
}

int GetRandomNumber(int level){
    return (rand()%4+1) + (level - 1)*4;
}

void ShowQuestion(int level, int num1, int num2){
    if(level == 4){
        puts("3단계까지 잘 오셨습니다. 성공입니다!");
        return;
    }

    int ans;
    printf("\n%d레벨 구구단을 외자~\n", level);
    printf("힌트 : %d x %d >>  ", num1, num2);
    scanf("%d",&ans);

    if(ans == num1 * num2){
        printf("%d단계 정답입니다!\n", level++);
    }
    else{
        printf("%d단계 오답입니다. 실패 종료입니다.\n",level);
        return;
    }
    
    ShowQuestion(level, GetRandomNumber(level), GetRandomNumber(level));
}