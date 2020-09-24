#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A[10]={1.5, 2.5, 3.5, 4.5, 6.5, 7.5, 8.5, 9.5, 10.5, 12};
    float B[10];
    for(int i=0;i<10;i++){
        B[i]=A[i]*A[i];
        printf("Res %do: %.2f\n",i+1,B[i]);
    }

    return 0;
}
