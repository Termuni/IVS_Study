#include<stdio.h>
#include<string.h>

int main(){
    //jenny -> j e n n y \NULL 로 6바이트로 저장됨(각각은 아스키코드로 저장되기 때문)
    //마지막 \NULL 없으면 문자열로 생각하지 않음
    //char * name = "jenny";
    char name[] = "jenny";
    char nameTwo[] = {'j', 'e', 'n', 'n', 'y'};
    printf("%s\n", nameTwo);    //포인트 변수 or 레퍼런스 변수 라고 함
    //ctrl + '/' => 주석처리
    // for(int i = 0; i < 6; ++i){
    //     printf("index : %d\t|\t글자 : %c\n", i, nameTwo[i]);
    // }
}