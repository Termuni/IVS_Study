/*
* https://github.com/comlec/rapa
* ���� ��¥ : 
* �����ڸ� : 
*/
// �ּ�ó�� : �巡�� �� ctrl + k + c
// �ּ����� : ctrl + k + u
#include<stdio.h>
// ���� : ������(int, long long), �Ǽ���(float, double), ������(����'', ���ڿ�"")
// ��C���� true/false �� �⺻ ������ Ÿ�Կ� ���Ե��� ����..?
int main() {
	int age = 27;
	char gender = 'F';
	char* name = "����";
	puts("�ȳ��ϼ���, 27��(F) �����Դϴ�.");
	printf("�ȳ��ϼ���, 27��(F) �����Դϴ�.\n");
	printf("�ȳ��ϼ���, %d��(%c) %s�Դϴ�.\n", age, gender, name);
}