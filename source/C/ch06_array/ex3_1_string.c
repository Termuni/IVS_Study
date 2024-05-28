#include<stdio.h>
#include<string.h>

int main(){
    //jenny -> j e n n y \NULL 로 6바이트로 저장됨(각각은 아스키코드로 저장되기 때문)
    //마지막 \NULL 없으면 문자열로 생각하지 않음
    //char * name = "jenny";
    char name[] = "jenny";
    for(int i = 0; i < 6; ++i){
        printf("index : %d\t|\t글자 : %c\n", i, name[i]);
    }
}