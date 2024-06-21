#include<stdio.h>
#include<stdint.h>
#define SET_BIT(var, pos)       ((var) |= (1 << (pos)))
#define CLEAR_BIT(var, pos)     ((var) &= ~(1 << (pos)))
#define TOGGLE_BIT(var, pos)    ((var) ^= (1 << (pos)))

int main(){
    
    uint8_t test = 0x44;
    
    printf("Register Value: %x\n", test);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (test & (1 << i)) ? 1 : 0);
    }    printf("\n");

    SET_BIT(test, 0);
    printf("Register Value: %x\n", test);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (test & (1 << i)) ? 1 : 0);
    }    puts("");

    CLEAR_BIT(test, 0);
    printf("Register Value: %x\n", test);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (test & (1 << i)) ? 1 : 0);
    }    puts("");
    
    TOGGLE_BIT(test, 2);
    printf("Register Value: %x\n", test);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (test & (1 << i)) ? 1 : 0);
    }    puts("");

}