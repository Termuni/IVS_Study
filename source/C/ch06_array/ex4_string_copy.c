#include<stdio.h>
#include<string.h>
//문자열 복사하는 함수가 있으나 따로 안 써도 됨
//하지만 string.h를 사용해보기 위해 실습
int main(void){
    int *i = 10;
    int *j = i;
    i = 99;
    printf("i = %d\t|  j = %d\n", i, j);

    char * str1 = "Hello";  //"Hello\0" 가 어딘가 잡히고, str1에는 주소값을 가짐
    char * str2 = str1;     //(얕은 복사) str2에 str1의 주소값을 복사해서 지정함
    char * str3;
    strcpy(str3, str1);     //(깊은 복사) str1의 문자열을 str2에 새로 만들어서 저장

    //얕은 복사, 깊은 복사
    //얕은 복사         : str1 -> "Hello\0" 라는 값을 갖고있는 메모리의 주소(예시 0x3201)를 가르킴
    //이때 str2 = str1  : str2도 str1이 가르키는 "Hello\0"의 주소(예시 0x3201)를 가르킴
    //깊은 복사         : str1 -> "Hello\0" 라는 값을 갖고있는 메모리의 주소(예시 0x3201)를 가르킴
    //이때 strcpy(str3, str1) : "Hello\0"를 그대로 복사해서 새로운 메모리의 주소(예시 0x5482)에 저장
    //str3은 새롭게 저장된 "Hello\0"(0x5482)를 가르킴

    str1 = "GoodBye";       //str1이 지정하는 주소값을 변경하는 것
                            //str1의 문자열이 바뀌면 str1의 기존 문자 버리고, 새로운 공간에 새로운 문자열 저장
    //배열과 착각하면 안 됨! 다름!
    printf("str1 = %s\t|  str2 = %s", str1, str2);
}