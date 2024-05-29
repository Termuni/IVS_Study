#include<stdio.h>

struct list
{
    int num;
    struct list* next;  //List type 가르키는 next 라는 이름의 포인터
};

typedef struct list List;

int main(void){
    List a = {10, 0}, b = {20, 0}, c = {30, 0}; //b, c가 할당 될 주소값을 모르기에 우선 0으로 비워두는 것
    //Head라는 struct 포인터 변수를 선언 -> 맨 앞(대가리)가 됨
    List * head = &a;
    List * current;
    a.next = &b;
    b.next = &c;
    printf("List의 크기 : %d\n", sizeof(List));
    printf("Head의 : %d\n", sizeof(head));
    
    printf("전체 데이터 : ");
    current = head;

    while (current) //current는 주소 출력중으로, c에 도달하기 전 까지 0이 아님
    {
        printf("%d\t", current->num);
        current = current->next;        //current가 다음 주소를 가르키도록 조정
    }
    
}