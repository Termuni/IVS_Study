#include <stdio.h>
#include <stdlib.h>

int func1(int *var)
{
    int temp;
    temp = *var;
    //*var = *var + 1;  //var++ 와 같은 역할
    return *var + 1;    //++var 와 같은 역할
}

int main()
{
    int iPtr;
    iPtr = 1;
    printf("%d\n", iPtr);
    printf("%d\n", func1(&iPtr));
    printf("%d\n", iPtr);
    system("pause");
    return 0;
}