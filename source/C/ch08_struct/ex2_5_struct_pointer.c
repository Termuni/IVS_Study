#include<stdio.h>

struct gameInfo
{
    char * name;
    int year;
    int price;
};

typedef struct gameInfo GameInfo;

int main(void){
    GameInfo gameInfo1;
    gameInfo1.name = "사이버c";
    gameInfo1.year = 2024;
    gameInfo1.price = 33000;
    
    printf("게임정보(gameInfo1) 출력\n");
    
    //직접 출력
    printf("게임이름 : %s\n", gameInfo1.name);
    printf("출시연도 : %d\n", gameInfo1.year);
    printf("게임가격 : %d\n", gameInfo1.price);
    puts("-------------------");
    
    GameInfo * gamePtr = &gameInfo1;    //gamePtr은 gameInfo1의 주소를 가르킴

    //포인터 통해 출력 VER1 (괄호 이용)
    printf("게임이름 : %s\n", (*gamePtr).name);
    printf("출시연도 : %d\n", (*gamePtr).year);
    printf("게임가격 : %d\n", (*gamePtr).price);
    puts("-------------------");
    
    //포인터 통해 출력 VER2 (전용 연산자 이용)
    printf("게임이름 : %s\n", gamePtr->name);
    printf("출시연도 : %d\n", gamePtr->year);
    printf("게임가격 : %d\n", gamePtr->price);
    puts("-------------------");
}