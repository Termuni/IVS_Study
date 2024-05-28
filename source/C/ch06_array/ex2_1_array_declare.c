#include<stdio.h>
//배열(array) : "동일" 자료형의 집합
int main(void){
    //초기화 해도, 안 해도 됨
    //배열 선언, 최초 선언시 쓰레기값 들어가있음
    //2차원 배열 -> 실무에서 쓸일 없음..

    //배열 선언과 할당을 분리
    int subway[3];
    subway[0] = 30; subway[1] = 40; subway[2] = 50;
    
    for(int idx = 0; idx < 3; idx++){
        printf("subway[%d] = %d\n", idx, subway[idx]);
    }
}