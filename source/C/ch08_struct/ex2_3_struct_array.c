#include<stdio.h>

struct student {
    int id;
    char name[20];      //char * name 해놓고 scanf로 받으면 안 됨!
    double grade;
};

void StPrint(struct student st);    //함수 선언

int main(void){
    //구조체 배열 변수 선언과 함께 초기화
    struct student sArr[3] = {  {101, "홍길동", 4.43}, 
                                {102, "강선민", 3.79}, 
                                {103, "신길동", 4.21}};
    //sArr[0].id = 101; 
    //sArr[0].name = "홍길동"; //-> 에서 오류
    //printf("%d",sizeof(sArr[0]));    //32byte 나옴, name 크기 변경하면서 확인해보니 8byte 단위로 잘림
    
    printf("학번\t이름\t학점\n");
    
    for(int idx = 0; idx < 3; ++idx){
        StPrint(sArr[idx]);
    }

}

void StPrint(struct student st){
    printf("%d\t%s\t%.2lf\n", st.id, st.name, st.grade);
    return;
}