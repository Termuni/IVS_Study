#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint8_t     BR              : 3;
    uint8_t     Reserved        : 3;
    uint8_t     BR2      : 3;
    uint8_t     BR3      : 3;
    uint8_t     BR4      : 3;   //나중에 책임님 코드 다시보기
    

} BitFieldData;

int main() {
    BitFieldData data;
    uint8_t target;
    memcpy(&target,&data,sizeof(target));
    for (int i = 7; i >= 0; i--) {
        printf("%d", (target & (1 << i)) ? 1 : 0);
    }
    return 0;
}