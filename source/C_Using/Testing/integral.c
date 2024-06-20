#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double integral(double A, double B, double D, double N){
    double sum = 0;
    for(int i = 1; i <= N; ++i){
        sum += (B-A) / N * ( pow(A + i*((B-A)/N) , D) );
    }
    return sum;
}
int main(){
    printf("%lf\n", integral(0, 2, 2, 1000));
    printf("%lf\n", integral(0, 2, 3, 1000));
    system("pause");
    return 0;
}