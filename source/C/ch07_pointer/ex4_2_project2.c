#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Swap(int * a, int * b);
void Sort(int * lotto);
int * MakeLotto();

int main(void){
    srand((unsigned int)time(NULL));
    int * lotto = MakeLotto();
    printf("로또번호 : ");
    for(int i = 0; i<6; ++i){
        printf("%d\t", lotto[i]);
    }
    puts("");
}

void Swap(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void Sort(int * lotto){
    for(int i = 0; i < 5; ++i){
        for(int j = i; j < 6; ++j){
            if(lotto[i] > lotto[j]){
                Swap(&lotto[i], &lotto[j]);
            }
        }
    }
}

int * MakeLotto(){
    static int lotto[6];
    int rnd, idx = 0, conditionCheck = 1;
    
    while(idx<6){
        rnd = rand() % 45 + 1;

        for(int i = 0; i < idx; ++i){
            if(rnd == lotto[i]){
                conditionCheck = 0;
                break;
            }else{
                conditionCheck = 1;
            }
        }//for

        if(conditionCheck){
            lotto[idx] = rnd;
            idx++;
        }

    }//while

    Sort(lotto);
    return lotto;
}