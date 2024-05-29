#include<stdio.h>
//배열 안의 값을 오름차순 정렬하는 함수를 구현

void Swap(int * a, int * b);
void SelectionSorting(int * arr, int cnt); //함수 선언(cnt : 배열 방의 개수)

int main(void){
    int lotto[6] = {41, 1, 35, 20, 45, 10};
    printf("정렬 전 : ");
    for(int idx = 0; idx<6; ++idx){
        printf("%d\t", lotto[idx]);
    }
    SelectionSorting(lotto, 6);
    printf("\n정렬 후 : ");
    for(int idx = 0; idx<6; ++idx){
        printf("%d\t", lotto[idx]);
    }
}

void Swap(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void SelectionSorting(int * arr, int cnt){
    for(int i = 0; i < cnt - 1; ++i){
        for(int j = i; j < cnt; ++j){
            if(arr[i] > arr[j]){
                Swap(&arr[i], &arr[j]);
            }
        }
    }
    return;
}