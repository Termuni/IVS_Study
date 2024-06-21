#include <stdio.h>
 #include <stdint.h>
typedef union {
    struct
    {    
        uint8_t     BR          : 3;
        uint8_t     Reserved1   : 1;
        uint8_t     BR_RATIO    : 2;
        uint8_t     Reserved2   : 1;
        uint8_t     SWK_EN      : 1;
    }fields;

    uint8_t value;
}BitFieldUnion;

int main() {
    BitFieldUnion data;
    // data.fields.BR = 4;
    // data.fields.BR_RATIO = 0;
    // data.fields.SWK_EN = 1;
    data.value = 0xc4;
    
    for (int i = 7; i >= 0; i--) {
        printf("%d", (data.value & (1 << i)) ? 1 : 0);
    }
    return 0;
}