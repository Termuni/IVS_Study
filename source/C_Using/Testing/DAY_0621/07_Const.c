#include <stdio.h>
void modifyValue(int *value) {
    int tempvalue = 10;
    const temp = 10;
    //temp = 20;
    *value = tempvalue; // 포인터를 통해 값을 변경
}

int main() { //text에 const 변수 생성, 지우는 것은 section단위로 지움
    const int num = 5;
    printf("변경 전: %d\n", num);   //주소로 보내면 바꿀 수 있음, 함수에서는 대상이 const인지 모름
    modifyValue(&num); // 함수에 포인터를 전달
    printf("변경 후: %d\n", num);
    return 0;
}