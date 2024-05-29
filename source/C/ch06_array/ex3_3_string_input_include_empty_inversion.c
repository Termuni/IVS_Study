#include<stdio.h>
int main(void){
    char name[128];
    char address[512];
    //주소에는 이미 쓰레기값이 들어가있기에, gets(address)를 해서 지울 필요는 없음
    printf("주소를 입력해주세요 : ");
    //gets(address);    넣으면 꼬임
    gets(address);
    printf("이름을 입력해주세요 : ");
    scanf("%s", name, sizeof(name));  
    printf("입력한 이름 : %s\n", name);
    printf("입력한 주소 : %s\n", address);
    return 0;
}