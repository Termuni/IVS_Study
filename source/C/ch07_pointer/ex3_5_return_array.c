#include<stdio.h>
//int[] ReturnArray(int * ptr) --> 이건 아예 불가능!
//그러므로 포인터를 리턴해서 해결함
int* ReturnArray(int * ptr);

int main(void){
    int arr[] = {10, 20, 30};
    int * afterArr = ReturnArray(arr);
    printf("수정 전 : ");
    for(int idx = 0; idx < 3; ++idx){
        printf("arr[%d] = %d\t", idx, arr[idx]);
    }
    printf("\n수정 후 : ");
    for(int idx = 0; idx < 3; ++idx){
        //printf("arr[%d] = %d\t", idx, afterArr[idx]);
        printf("afterArr[%d] = %d\t", idx, *(afterArr + idx));
    }
}

int* ReturnArray(int * ptr){
    static int resultArr[3];        //static을 안 남겨놓으면 나중에 return할 때 resultArr이 없어짐
                                    //static이 있으면 함수가 종료되고도 남아있을 수 있음
    for(int idx = 0; idx<3; ++idx){
        resultArr[idx] = ptr[idx];  //깊은 복사
    }
    resultArr[1] = 99;
    return resultArr;
}