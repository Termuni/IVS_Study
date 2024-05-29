#include<stdio.h>
// 이름(빈문자 불포함), 주소(빈문자 포함)를 입력 받기
// 한글로 받을 예정
// scanf("%s", 변수, 입력 받을 byte수);
// ※white space(tab이나 spacebar, enter 같은), 이하 WS※
// 강선민\n 과 같은 \n도 white space
// WS가 오면 그 이전의 버퍼내용(이름, 숫자 등 입력값)을 return
// 단, 처음 나오는 WS는 무시

// 예를 들어 아래 예제에서 이름에 "강선민\n" 을 하면
// 버퍼의 "강선민" 은 지워지고 "\n"만 남음
// 버퍼에는 이제 "\n서울시 강동구\n" 이 입력됨
// 이때 scanf에서 버퍼의 맨 앞 "\n"은 무시하므로, "서울시 강동구\n" 이 입력됨
// 이때 ' ' 의 WS가 있으므로 "서울시" 만 입력됨
// 이는 영어로 해도 동일함, "Kang SeonMin\n" -> "Kang" 만 Name에 들어가고, " SeonMin\n"이 address에 입력됨

// ∴ scanf(변수) 대신 gets(변수) 를 사용하면
// '\n' 이전까지만 인식하고 그 뒤는 버퍼에서 지움, 즉 WS중 \n만 인식함
// 단, 맨 앞에 \n이 들어와도 인식하기에 버퍼를 잘 생각하면서 사용해야함
// 그러므로 앞에 버퍼를 지우는 용도의 함수가 필요함

int main(void){
    //char * name;    //변수 들어갈 주소만 정한 것, 몇글자나 들어갈지 모르기에 입력받을 문자열 공간이 확보되지 않음
    char name[128];
    char address[512];
    printf("이름을 입력해주세요 : ");
    scanf("%s", name, sizeof(name));        //name의 사이즈 만큼만 받겠다
    printf("주소를 입력해주세요 : ");
    gets(address);  //버퍼를 지우는 용도
    gets(address);                          //앞에서 버퍼에 \n이 들어와서 무시하지 못함! 그래서 \n 인식하자마자 바로 끝
    //scanf("%s", address, sizeof(address));  //"서울시 강동구 길동 349-7" 과 같이 WS가 있어 중간에 끊길것으로 예상됨

    printf("입력한 이름 : %s\n", name);
    printf("입력한 주소 : %s\n", address);
    return 0;
}