#include<stdio.h>

int main(void) {
	//선언법 1
	int num1 = 10;
	//선언법 2
	int num2;	//값 안 넣어두면 쓰레기값 들어가 있음, 선언만 한 상태
	num2 = 20;	//할당(declare)
	printf("num1 = %d\t num2 = %d\n", num1, num2);
	//선언법 3
	int num3 = 30, num4 = 40, num5 = 50;
	printf("num3 = %d\t num4 = %d\t num5 = %d\n", num3, num4, num5);
	//선언법 4
	int n1, n2, n3;
	n1 = 1; n2 = 2; n3 = 3;
	printf("n1 = %d, n2 = %d, n3 = %d\n", n1, n2, n3);
}