#include<stdio.h>
//�ǹ����� ������� �ʴ� �Ǽ��� ����?	-> float
//	float : 4byte	|	double : 8byte
//	int : 4byte		|	long long : 8byte
// �⺻Ÿ�� �� �Ҽ��� �� : double	|	�Ҽ��� �� : int
int main() {
	int age = 20;
	long long money = 2200000000LL;	//22��, L�� �ٿ��� longtype 1�� �ٿ���, LL�ٿ��� lon long �ٿ���
	float f = 3.141592524233F;		//float�� �ִ� ���� F�ٿ��� float���� �����ִ� ��
	double d = 3.141592524233;		//float�� �ƴ� double�� �ִ� ������ �˷���
	printf("f = %.11f\n", f);
	printf("d = %.11lf\n", d);
	printf("L = %lld\n", money);

	if (f == d) {
		puts("f�� d�� ���� �ʴ�");
	}
	else {
		puts("f�� d�� ���� �ʴ�");
	}

	f = 10.1F;
	d = 10.1;
	printf("f = %.11f\n", f);		//�̰� ���� ������ �����, ���� �ʴ� �� ����
	printf("d = %.11lf\n", d);
	if (f == d) {
		puts("f�� d�� ���� �ʴ�");
	}
	else {
		puts("f�� d�� ���� �ʴ�");
	}
}