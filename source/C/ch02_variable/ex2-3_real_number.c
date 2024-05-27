#include<stdio.h>
//실무에서 사용하지 않는 실수형 변수?	-> float
//	float : 4byte	|	double : 8byte
//	int : 4byte		|	long long : 8byte
// 기본타입 → 소숫점 有 : double	|	소숫점 無 : int
int main() {
	int age = 20;
	long long money = 2200000000LL;	//22억, L을 붙여서 longtype 1개 붙여줌, LL붙여서 lon long 붙여줌
	float f = 3.141592524233F;		//float에 넣는 것을 F붙여서 float임을 정해주는 것
	double d = 3.141592524233;		//float가 아닌 double을 넣는 것임을 알려줌
	printf("f = %.11f\n", f);
	printf("d = %.11lf\n", d);
	printf("L = %lld\n", money);

	if (f == d) {
		puts("f와 d는 같지 않다");
	}
	else {
		puts("f와 d는 같지 않다");
	}

	f = 10.1F;
	d = 10.1;
	printf("f = %.11f\n", f);		//이거 엄한 데이터 출력함, 쓰지 않는 것 권장
	printf("d = %.11lf\n", d);
	if (f == d) {
		puts("f와 d는 같지 않다");
	}
	else {
		puts("f와 d는 같지 않다");
	}
}