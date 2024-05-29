#include<stdio.h>
int main(void){
    char name[128];
    char address[512];
    printf("이름을 입력해주세요 : ");
    scanf("%s", name, sizeof(name));        //name의 사이즈 만큼만 받겠다
    printf("주소를 입력해주세요 : ");
    gets(address);  //버퍼를 지우는 용도
    gets(address);                         

    printf("입력한 이름 : %s\n", name);
    printf("입력한 주소 : %s\n", address);
    return 0;
}