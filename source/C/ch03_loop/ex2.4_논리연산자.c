#include<stdio.h>
#include<stdbool.h>
//논리연산자 : &&(and) ||(or) !(not)
int main(){
    int i = 1, j = 10, h = 10;
    printf("(i<j) && (++j>h) = %s\n", ((i < j) && (++j > h)) ? "참" : "거짓");
    printf("j는 %d\n", j);
    printf("(i>j) && (++j>h) = %s\n", ((i > j) && (++j > h)) ? "참" : "거짓");
    //&&의 좌항이 false이므로 우항의 ++를 연산하지 않음!
    printf("j는 %d\n", j);
    printf("(i<j) && (j-->h) = %s\n", ((i < j) && (j-- > h)) ? "참" : "거짓");
    printf("j는 %d\n", j);

    printf("(i>j) || (++j>h) = %s\n", ((i > j) || (++j > h)) ? "참" : "거짓");
    printf("j는 %d\n", j);

    //&&의 좌항이 true이므로 우항의 ++를 연산하지 않음!
    printf("(i<j) || (++j>h) = %s\n", ((i < j) || (++j > h)) ? "참" : "거짓");
    printf("j는 %d\n", j);

}