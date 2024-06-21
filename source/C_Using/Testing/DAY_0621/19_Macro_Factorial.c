#include <stdio.h>
#define FACTORIAL(n) ({ \
 int result = 1; \
 for(int i=n; i>0; --i){ \
    result *= i;\
 }\
 result; \
})//중괄호도 있는데 괄호를 또 쓰는 이유?

int main() {
    int num = 5;
    int factorial_result = FACTORIAL(num);
    
    printf("%d! = %d\n", num, factorial_result);
    return 0;
}