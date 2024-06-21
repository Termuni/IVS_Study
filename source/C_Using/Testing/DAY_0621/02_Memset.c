#include <stdio.h>
#include <string.h>
int main() {
    int arr[10];
    // char -> 배열을 3으로 초기화
    // int 단위 인 경우 못함, byte단위로 작동되기 때문
    memset(arr, 3, sizeof(arr));
    // 초기화된 배열의 내용 출력
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
        //결과값 : 50529027
        //2진수 변환 시 0000 0011 0000 0011 0000 0011 0000 0011
    }
    printf("\n");
    return 0;
}