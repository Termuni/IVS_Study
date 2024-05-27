#include<stdio.h>
/*
* 서식 지정자 : %d, %f, %.3lf(반올림), %c(문자 하나), %s(문자열)
*/
int main(void) {
	int num1 = 10, num2 = 11;
	printf("두 수의 합 : %d\n", num1 + num2);
	printf("두 수의 평균 : %f\n", (num1 + num2) / 2);
	printf("두 수의 평균 : %f\n", (num1 + num2) / 2.0f);
	//정수형(4byte)과 정수형(4byte)의 사칙연산 결과 -> 정수형(4byte)
	printf("두 수의 평균 : %lf\n", (num1 + num2) / 2);

	printf("두 수의 평균(float) : %f\n", (num1 + num2) / 2.0);
	printf("두 수의 평균(double) : %.2lf\n", ((double)num1 + num2) / 2.0);
	//double과 int 더하면 double됨
}