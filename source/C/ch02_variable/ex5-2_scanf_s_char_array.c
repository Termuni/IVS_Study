#include<stdio.h>

int main(void) {
	char gender, name[100];
	printf("������ �Է��ϼ��� : ");
	scanf_s("%c", &gender, 1);
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name, (unsigned)sizeof(name));	//������ �����, name�� ũ������� �Է¹ްڴ� ��� ��
	printf("�Է��� ������ %c\n", gender);
	printf("�Է��� �̸��� %s�Դϴ�.\n", name);
	return 0;
}