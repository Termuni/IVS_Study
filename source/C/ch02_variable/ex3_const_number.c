//��� : �Һ��� ����, ��κ� �빮��
#define PI 3.14159265359
#include <stdio.h>

int main(void) {
	const double UPI = PI;
	int r = 3;
	//UPI = 3.14159;	//lvalue, �� ��ȭ��ų�� ���� ������ ���� �Ұ�
	//PI = 3.14159;
	printf("�������� %d�� ���� ���̴� %.3lf\n", r, UPI);
}