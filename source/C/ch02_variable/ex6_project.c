#include<stdio.h>

int main(void) {
	int korean, english, math;
	char gender[3], name[100];

	printf("������ �Է��ϼ���(��/��) : ");
	scanf_s("%s", gender, (unsigned)sizeof(gender));

	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name, (unsigned)sizeof(name));

	printf("���� ���� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", & korean, &english, &math);
	//scanf_s("%d", &korean);
	//scanf_s("%d", &english);
	//scanf_s("%d", &math);


	puts("\n--- �л����� ---");
	printf("�̸� : %s\n", name);
	printf("���� : %s\n", gender);
	printf("���� = %d\n", korean);
	printf("���� = %d\n", english);
	printf("���� = %d\n", math);
	printf("�հ� = %d\n", korean + english + math);
	printf("��� = %.2lf\n", (double)(korean + english + math) / 3.0);

}