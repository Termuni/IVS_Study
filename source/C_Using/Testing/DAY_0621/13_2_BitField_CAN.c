#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef struct
{
    unsigned int currentData1       : 10;
    unsigned int currentData2       : 10;
    unsigned int currentData3       : 10;
    unsigned int currentData4       : 10;
    unsigned int gsensor1           : 6;
    unsigned int gsensor2           : 6;
    unsigned int gsensor3           : 6;
    unsigned int gsensor4           : 6;
}myData;



int main() {
    uint8_t canDataArray[8] = { 0x64, 0xC8, 0x00, 0x00, 0x01, 0x32, 0x4E, 0x28 };
    myData mydata;
    memcpy(&mydata, canDataArray, sizeof(mydata));
    printf("Current Data:\n");                          //아래 hex값은 원래 나왔던 값들
    printf("Current 1: %x\n", mydata.currentData1);     //164
    printf("Current 2: %x\n", mydata.currentData2);     //32
    printf("Current 3: %x\n", mydata.currentData3);     //0
    printf("Current 4: %x\n", mydata.currentData4);     //4
    printf("\nGsensor Data:\n");
    printf("Gsensor 1: %x\n", mydata.gsensor1);         //32
    printf("Gsensor 2: %x\n", mydata.gsensor2);         //38
    printf("Gsensor 3: %u\n", mydata.gsensor3);         //4
    printf("Gsensor 4: %u\n", mydata.gsensor4);         //a
    return 0;
}