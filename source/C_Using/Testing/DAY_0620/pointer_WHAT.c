#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numArr[3][4] = {
    { 11, 22, 33, 44 },
    { 55, 66, 77, 88 },
    { 99, 110, 121, 132 }
    };
    int(*numPtr)[4] = numArr;
    
    int * numTest[3];
    numTest[0] = numArr[0];
    numTest[1] = numArr[1];
    numTest[2] = numArr[2];
    printf("%d\n", *(numTest[0]+1));

    printf("%p\n", *numPtr);
    printf("%p\n", *numArr);
    printf("%d\n", numPtr[0]);
    printf("%d\n", numPtr[0]+1);
    printf("%d\n", numPtr[2][1]);
    printf("%d\n", sizeof(numArr));
    printf("%d\n", sizeof(numPtr));
    system("pause");
    return 0;
}