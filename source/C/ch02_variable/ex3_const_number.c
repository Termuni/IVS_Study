//상수 : 불변한 정수, 대부분 대문자
#define PI 3.14159265359
#include <stdio.h>

int main(void) {
	const double UPI = PI;
	int r = 3;
	//UPI = 3.14159;	//lvalue, 즉 변화시킬수 없는 변수라서 변경 불가
	//PI = 3.14159;
	printf("반지름이 %d인 원의 넓이는 %.3lf\n", r, UPI);
}