#include<stdio.h>
int main(void) {
	int input;
	printf("값을 입력하세요 >> ");
	scanf_s("%d", &input);		//서식 지정자, 어느 변수로 받는지 그 주소를 지정
	printf("입력하신 수는 %d입니다.\n", input);
}