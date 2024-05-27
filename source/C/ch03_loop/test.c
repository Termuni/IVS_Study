#include<stdio.h>
//산술연산자 : + - / * %
//(double) -> 명시적 형변환
//형변환 : 묵시적 형변환, int i = 3.2
int main(void){
    int n1 = 33, n2 = 10;
    printf("%d %c %d = %d\n", n1, '/', n2, n1 / n2);
    printf("%d %c %d = %.3lf\n", n1, '/', n2, (double)n1 / n2);
    printf("%d %c %d = %d\n", n1, '%', n2, n1 % n2);
    return 0;
}