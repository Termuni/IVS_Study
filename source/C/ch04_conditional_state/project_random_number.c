#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// 1~100 범위를 좁혀나가도록 하는 숫자 맞히기

int main(void){
    srand((unsigned int)time(NULL));

    int chance = 5, count = 0, random_number = rand()%100+1;
    int mini = 1, maxi = 100;
    int user_input;

    printf("ANSWER : %d\n", random_number);
    puts("-------------------------");
    puts("1~100 사이의 랜덤 숫자가 있습니다.\n기회는 5번입니다.\n해당 숫자를 맞춰보세요!");

    do{
        puts("-------------------------");
        printf("남은 도전 횟수 : %d\n", chance-count);
        puts("-------------------------");

        count++;
        
        printf("%d ~ %d 사이의 숫자 입력 : ", mini, maxi);
        scanf("%d",&user_input);
        puts("-------------------------");
#pragma region 정답비교
        if(user_input > maxi || user_input < mini){
            puts("당신이 입력한 숫자는 범위 밖입니다.");
        }
        else if(user_input > random_number){
            printf("당신이 입력한 숫자는 %d 이며, 이는 랜덤 숫자보다 큽니다.\n", user_input);
            maxi = user_input - 1;
        }
        else if(user_input < random_number){
            printf("당신이 입력한 숫자는 %d 이며, 이는 랜덤 숫자보다 작습니다.\n", user_input);
            mini = user_input + 1;
        }
        else{
            puts("정답을 맞췄습니다!");
            printf("당신이 시도한 횟수는 %d번 입니다.\n", count);
            return 0;
        } 
#pragma endregion

        //범위 체크
        if(count != chance){
            printf("현재 범위는 <%d ~ %d> 입니다.\n", mini, maxi);
        }

    }while(chance>count);

    puts("주어진 기회를 모두 사용하셨습니다.");
    printf("정답 숫자는 <%d>입니다.\n", random_number);
    puts("-------------------------");

    return 0;
}