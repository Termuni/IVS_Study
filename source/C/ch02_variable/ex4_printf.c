#include<stdio.h>
/*
* ���� ������ : %d, %f, %.3lf(�ݿø�), %c(���� �ϳ�), %s(���ڿ�)
*/
int main(void) {
	int num1 = 10, num2 = 11;
	printf("�� ���� �� : %d\n", num1 + num2);
	printf("�� ���� ��� : %f\n", (num1 + num2) / 2);
	printf("�� ���� ��� : %f\n", (num1 + num2) / 2.0f);
	//������(4byte)�� ������(4byte)�� ��Ģ���� ��� -> ������(4byte)
	printf("�� ���� ��� : %lf\n", (num1 + num2) / 2);

	printf("�� ���� ���(float) : %f\n", (num1 + num2) / 2.0);
	printf("�� ���� ���(double) : %.2lf\n", ((double)num1 + num2) / 2.0);
	//double�� int ���ϸ� double��
}