#include<stdio.h>

int Value_Stacker(int from, int to){
    int total = from;
    for(int i = to; i > from; i--){
        total += i;
    }
    return total;
}

int main(void){
    
    //section 1
    int a = 1, b = 100;
    int tot = 0;
    for(int i = a ; i <= b ; i++){
        tot += i;
    }
    printf("%d부터 %d까지의 누적합은 %d입니다\n", a, b, tot);
    //

    //section 2
    a = 10; b = 100;
    tot = 0;
    for(int i = a ; i <= b ; i++){
        tot += i;
    }
    printf("%d부터 %d까지의 누적합은 %d입니다\n", a, b, tot);
    //
}