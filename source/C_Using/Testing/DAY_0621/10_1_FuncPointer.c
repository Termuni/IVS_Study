#include <stdio.h>

//add 함수 선언
int add(int a, int b) {
    return a + b;
}

//subtract 함수 선언
int subtract(int a, int b){
    return a - b;
}

//multiply 함수 선언
int multiply(int a, int b){
    return a * b;
}

//divide 함수 선언
int divide(int a, int b){
    if(b != 0){
        return a / b;
    }
    puts("0으로 나눌 수 없습니다!!");
    return 0;
}

int main() {
    //typedef int (*FP_int_int2)(int, int);
    //FP_int_int2 operation;
    int (*operation)(int,int);

    int num1, num2;
    char operator;
    
    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    printf("연산자를 선택하세요 (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            operation = add;
            break;
        case '-':
            operation = subtract;
            break;
        case '*':
            operation = multiply;
            break;
        case '/':
            operation = divide;
            break;
    }

    int result = operation(num1, num2);

    printf("결과: %d\n", result);

    return 0;
}