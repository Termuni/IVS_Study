#include<stdio.h>
#include<math.h>

float possibility[366];

void calculatePossibility(int num, float diff){
    printf("studentNumber :%d, diffPercent : %f\n", num, diff);
    possibility[num] = diff;
    if(num == 365) return;
    calculatePossibility(num + 1, diff*(1-(float)(num)/365));
    return;
}

int main(){
    calculatePossibility(1, 1.0f);
}