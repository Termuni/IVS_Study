#include<stdio.h>

int main(){
    int i = 1;
    do{
        printf("%d. Hello World!\n", i++);
    }while(i<=10);
    return 0;
}