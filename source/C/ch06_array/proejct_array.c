#define MIN 999
#define MAX -1
#include<stdio.h>

//유수민, 김현식, 땅땅이, 슘당이의 키를 입력
//출력 : 평균, 최장신, 최단신 친구의 키, 이름
//평균 : XXX.XX(소숫점)
//최장 : 김현식 190
//최단 : 슘당이 120

int main(void){
    char * names[] = {"유수민", "김현식", "땅땅이", "새대갈", "슘당이"}; //name 변수는 문자열들을 포인터로 갖는 것
    //즉, "유수민", "김현식", ..., "슘당이" 라는 문자열이 메모리에 생성되고
    //각각의 메모리 위치를 포인터로 집어준다는 것
    //즉 name[0]는 포인터로서 메모리에서 "유수민"의 주소값을 지정해서 가지고 있음
    int arrHeight[5];
    int totHeight = 0;
    int idxMin, minHeight = MIN;    //최단신을 구하기 위한 변수들(인덱스, 키값)
    int idxMax, maxHeight = MAX;    //최장신을 구하기 위한 변수들(인덱스, 키값)

    for(int i = 0; i < 5; ++i){
        printf("%s의 키 : ", names[i]);
        scanf("%d", &arrHeight[i]);
        if(&arrHeight[i] < 0){
            puts("※ERROR : WRONG HEIGHT INPUT※");
            return 0;
        }

        totHeight += arrHeight[i];
        
        if(arrHeight[i] > maxHeight){
            idxMax = i;
            maxHeight = arrHeight[i];
        }
        if(arrHeight[i] < minHeight){
            idxMin = i;
            minHeight = arrHeight[i];
        }
    }
    for(int i = 0; i < 5; ++i){
        if(arrHeight[i] == maxHeight && i != idxMax){
            arrHeight[i] = -2;  //same maxHeight
        }
        if(arrHeight[i] == minHeight && i != idxMin){
            arrHeight[i] = -3;  //same minHeight
        }
    }
    
    printf("------------------\n평균키 : %.2lf\n", (double)totHeight/5.0);

    printf("최장신 친구 %s 의 키는 %d\n", names[idxMax], maxHeight);

    for(int i = 0; i < 5; ++i){
        if(arrHeight[i] == -2){
            printf("동일한 최장신 친구 %s도 있습니다.\n", names[i]);
        }    
    }

    printf("최단신 친구 %s 의 키는 %d\n", names[idxMin], minHeight);
    
    for(int i = 0; i < 5; ++i){
        if(arrHeight[i] == -3){
            printf("동일한 최단신 친구 %s도 있습니다.\n", names[i]);
        }    
    }

}