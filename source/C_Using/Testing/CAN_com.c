#define BYTE_USE_2 (uint8_t)3        //0000 0011  -> USE last 2 
#define BYTE_USE_4 (uint8_t)15       //0000 1111  -> USE last 4

#include <stdio.h>
#include <stdint.h>

// 자료의 비트 자리   0 1 2 3 4 5 6 7                        0 1 2 3 4 5 6 7
// canDataArray[0] = 0 0 1 0 0 1 1 0  /  canDataArray[1] =  1 0 0 1 0 0 1 1
//                   = 0x64           /                    = 0xC9  -> [4~7 = C], [0~3 = 9]
// currentData1 = 10bit

int main() {
    uint8_t canDataArray[8] = { 0x64, 0xC9, 0x00, 0x00, 0x01, 0x32, 0x4E, 0x28 };
    uint16_t currentData1 = ((uint16_t)(canDataArray[1] & BYTE_USE_2) << 8) | canDataArray[0];
    uint16_t currentData2 = ((uint16_t)(canDataArray[2] & BYTE_USE_4) << 8) | ((canDataArray[1] & ~BYTE_USE_2) >> 2);
    uint16_t currentData3 = ((uint16_t)(canDataArray[3] & ~BYTE_USE_2) << 8) | ((canDataArray[2] & BYTE_USE_4) >> 4);
    //uint16_t currentData4 = ((uint16_t)(canDataArray[4]) << 8) | ((canDataArray[3] & BYTE_USE_2) >> 6);

    // uint8_t gsensor1;
    // uint8_t gsensor2;
    // uint8_t gsensor3;
    // uint8_t gsensor4;

    //Current Data : 164,32,0,4  G Sensor : 32,38,4,a
    //각Can Bit 별 Parsing 하는 Code 를 작성하라
    
    printf("Current Data:\n");
    printf("Current 1: %x\n", currentData1);
    printf("Current 2: %x\n", currentData2);
    printf("Current 3: %x\n", currentData3);
    // printf("Current 4: %x\n", currentData4);
    // printf("\nGsensor Data:\n");
    // printf("Gsensor 1: %x\n", gsensor1);
    // printf("Gsensor 2: %x\n", gsensor2);
    // printf("Gsensor 3: %x\n", gsensor3);
    // printf("Gsensor 4: %x\n", gsensor4);
    return 0;
}