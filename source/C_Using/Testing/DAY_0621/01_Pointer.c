#define _CRT_SECURE_NO_WARNINGS
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdint.h>

 void do_ccp(uint32_t address, uint32_t command, uint32_t value){
    switch (command)
    {
    case 0:
        return;
    case 1: //u8
        *((uint8_t*)address) = value;
        //(uint8_t*)address -> 참조, 포인터로 위치 찾기, address가 가리키는 메모리 위치의 값을 참조
        //*((uint8_t*)address) -> 역 참조, 값 입력하기 위함
        break;
    case 2: //u16
        *((uint16_t*)address) = value;
        break;
    case 3: //u32
        *((uint32_t*)address) = value;
        break;
    case 4: //s8
        *((int8_t*)address) = value;
        break;
    case 5: //s16
        *((int16_t*)address) = value;
        break;
    case 6: //s32
        *((int32_t*)address) = value;
        break;
    default:
        break;
    }
}

int main() {
    uint8_t u8 = 0;
    uint16_t u16 = 0;
    uint32_t u32 = 0;
    int8_t s8 = 0;
    int16_t s16 = 0;
    int32_t s32 = 0;
    printf("u8:%d, u16:%d, u32:%d, s8:%d, s16:%d, s32:%d\n", &u8, &u16, &u32, &s8, &s16, &s32);
    puts("");
    uint32_t address, command, value;
    do{
        scanf("%d %d %d", &address, &command, &value);
        
        do_ccp(address, command, value);

        printf("u8 : %d, u16 : %d, u32 : %d, s8 : %d, s16 : %d, s32 : %d\n", u8, u16, u32, s8, s16, s32);
    } while(command != 0);
    return 0;
    system("pause");
}