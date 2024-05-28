#include<stdio.h>

int main(void){
    //배열 선언과 초기화 한번에, 배열 개수 안 써도 초기화는 잘 됨
    int subway[] = {30, 40, 50};
    
    //배열의 크기를 생략하지 않으면 그 방 갯수만큼 메모리로 잡힘
    //다만 모자르게 입력 시 앞부터 채우고, 나머지는 강제로 쓰레기값 대신 0으로 초기화
    int test[10] = {30, 40, 50};

    for(int idx = 0; idx < 3; idx++){
        printf("subway[%d] = %d\n", idx, subway[idx]);
    }

    for(int idx = 0; idx < sizeof(test) / sizeof(test[0]); idx++){
        printf("test[%d] = %d\n", idx, test[idx]);
    }
}