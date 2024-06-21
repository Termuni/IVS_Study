#include <stdio.h>
 int main() {
    unsigned char registerValue = 0;
    
    registerValue |= (1<<7);
    registerValue |= (4<<0);

    printf("Register Value : %x\n", registerValue);
    
    //1. SWE_EN = Enable
    //2. BR_RATIO = Ratio<=4
    //3. BR = 500kbp/s
 
    for (int i = 7; i >= 0; i--) {
        printf("%d", (registerValue & (1 << i)) ? 1 : 0);
    }
    printf("\n");
    return 0;
 }