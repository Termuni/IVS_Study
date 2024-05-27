#include<stdio.h>

int main(void) {
	int korean, english, math;
	char gender[3], name[100];

	printf("성별을 입력하세요(남/여) : ");
	scanf_s("%s", gender, (unsigned)sizeof(gender));

	printf("이름을 입력하세요 : ");
	scanf_s("%s", name, (unsigned)sizeof(name));

	printf("국어 영어 수학 점수를 입력하세요 : ");
	scanf_s("%d %d %d", & korean, &english, &math);
	//scanf_s("%d", &korean);
	//scanf_s("%d", &english);
	//scanf_s("%d", &math);


	puts("\n--- 학생정보 ---");
	printf("이름 : %s\n", name);
	printf("성별 : %s\n", gender);
	printf("국어 = %d\n", korean);
	printf("영어 = %d\n", english);
	printf("수학 = %d\n", math);
	printf("합계 = %d\n", korean + english + math);
	printf("평균 = %.2lf\n", (double)(korean + english + math) / 3.0);

}