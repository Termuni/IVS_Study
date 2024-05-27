/*
* https://github.com/comlec/rapa
* 개발 날짜 : 
* 개발자명 : 
*/
// 주석처리 : 드래그 후 ctrl + k + c
// 주석해제 : ctrl + k + u
#include<stdio.h>
// 변수 : 정수형(int, long long), 실수형(float, double), 문자형(문자'', 문자열"")
// ※C언어에는 true/false 는 기본 데이터 타입에 포함되지 않음..?
int main() {
	int age = 27;
	char gender = 'F';
	char* name = "제니";
	puts("안녕하세요, 27살(F) 제니입니다.");
	printf("안녕하세요, 27살(F) 제니입니다.\n");
	printf("안녕하세요, %d살(%c) %s입니다.\n", age, gender, name);
}