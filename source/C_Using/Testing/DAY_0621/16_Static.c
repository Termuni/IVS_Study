 #include<stdio.h>
 #include<stdlib.h>
// extern void print3();
extern int count;   //외부의 count를 가져온다는 것?
//static한 값의 int -> 외부에서 건드리지 못하게 고정시킴

void print1() {
    int count = 0;
    count++;
    printf("print1 : %d\n", count); //가장 가까운 지역변수 count를 사용
}

void print2() {
    static int count = 0;           //지역변수가 함수 끝나도 남아있게 됨, 외부에서 참조 불가
    count++;
    printf("print2 : %d\n", count); //계속해서 count가 증가..?
}

int main()
{
    print1();
    print1();
    print1();
    print2();
    print2();
    print2();
    print3();
    print3();
    print3();
    print3();
    printf("count : %d\n", count);
    system("pause");
    return 0;
}