 #define SWK_EN_MAX 7
 #define BR_BASE 0
 #include<stdio.h>
 #include<stdint.h>

 int main() {
    uint8_t flags = 0;
    //0번째 bit부터 Fail_0 ~ 7 입니다.
    // //0, 2, 3, 5, 7 번째 Fail이 발생 했을 때 이를 입력하세요
    flags |= (1<<SWK_EN_MAX); //7
    flags |= (5<<BR_BASE + 3); //3, 5
    flags |= (5<<BR_BASE); //0, 2
    // flags |= 1u << 0;
    // flags |= 0u << 1;
    // flags |= 1u << 2;
    // flags |= 1u << 3;
    // flags |= 0u << 4;
    // flags |= 1u << 5;
    // flags |= 0u << 6;
    // flags |= 1u << 7;

    // Fail_0부터 Fail_7까지 값을 검색하고 출력합니다.
    for(int i = 0; i < 8; i++) {
        uint8_t flag = (flags & (1 << i)) ? 1 : 0;
        //Flag변수 각 bit 값 추출
        printf("Fail_%d: %d\n", i, flag);
    }
    return 0;
 }