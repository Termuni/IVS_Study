#include<stdio.h>

int main(void) {
	char gender, name[100];
	printf("성별을 입력하세요 : ");
	scanf_s("%c", &gender, 1);
	printf("이름을 입력하세요 : ");
	scanf_s("%s", name, (unsigned)sizeof(name));	//무조건 양수로, name의 크기까지만 입력받겠다 라는 뜻
	printf("입력한 성별은 %c\n", gender);
	printf("입력한 이름은 %s입니다.\n", name);
	return 0;
}