#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_LOTTO_NUMBER 45

void generateLottoNumber(int lottoNum[7]){
    srand((unsigned)time(NULL));
    for (int i = 0; i < 7; i++) {
        lottoNum[i] = (rand() % MAX_LOTTO_NUMBER) + 1;

        for(int j = 0; j < i; ++j){
            if(lottoNum[j] == lottoNum[i]){
                --i;
            }
        }

    }
    bubbleSorting(lottoNum, 7);
}

void bubbleSorting(int * arr, int size){
    for(int i = 0; i < size; ++i){
        for(int j = 0; j < i; ++j){
            if(arr[i] < arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i = 0; i < size; ++i){
        printf("%d\t", arr[i]);
    }puts("");
    
}

void printResult(int lottoNum[7], int inputNum[6]){
    int result = memcmp(lottoNum, inputNum, sizeof(inputNum));
    if(result == 0){
        puts("1등 당첨 축하드립니다!!");
        return;
    }
    result = memcmp(lottoNum, inputNum, sizeof(inputNum) - 4);
    if(result == 0){
        puts("2등 당첨 축하드립니다!");
        return;
    }
    result = memcmp(lottoNum, inputNum, sizeof(inputNum) - 8);
    if(result == 0){
        puts("3등 당첨 축하드립니다.");
        return;
    }
    result = memcmp(lottoNum, inputNum, sizeof(inputNum) - 12);
    if(result == 0){
        puts("4등 당첨 축하드립니다");
        return;
    }
    result = memcmp(lottoNum, inputNum, sizeof(inputNum) - 16);
    if(result == 0){
        puts("5등 당첨입니다");
        return;
    }
    puts("낙첨입니다.");
    return;
}

int main(void) {
    int lottoNum[7], inputNum[6];
    int equalCount= 0;
    generateLottoNumber(lottoNum);
    printf("lotto number : %d %d %d %d %d %d\n", lottoNum[0], lottoNum[1], lottoNum[2], lottoNum[3], lottoNum[4], lottoNum[5]);
    printf("bonus number : %d\n", lottoNum[6]);
    printf("\nplease input 6 number : ");
    scanf("%d %d %d %d %d %d", &inputNum[0], &inputNum[1], &inputNum[2], &inputNum[3], &inputNum[4], &inputNum[5]);
    bubbleSorting(inputNum, 6);
    printResult(lottoNum, inputNum);
    system("pause");
    return 0;
 }