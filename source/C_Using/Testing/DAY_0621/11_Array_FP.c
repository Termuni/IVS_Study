#include <stdio.h>

// 제곱 함수
double square(double x) {
    return x * x;
}

// 세제곱 함수
double cube(double x) {
    return x * x * x;
}

// 네제곱 함수
double fourthPower(double x) {
    return x * x * x * x;
}

int main() {
    double (*functionPointers[])(double) = {square, cube, NULL};
    //
    double input;
    while(1){
        printf("실수를 입력하세요 (0을 입력하면 종료): ");
        scanf("%lf", &input);
        if(input == 0){
            puts("프로그램을 종료합니다");
            break;
        }
        for(int i = 0; i < sizeof(functionPointers)/sizeof(functionPointers[0]); ++i){
            if(functionPointers[i] != NULL){    //방어 코드 필요!!!
                printf("함수 %d 결과 : %.2lf\n", i, functionPointers[i](input));
            }
            else{
                puts("함수를 찾지 못했습니다");
            }
        }
    }
    return 0;
}