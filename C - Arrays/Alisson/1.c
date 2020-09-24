#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,soma=0;
    int A[6] = {1, 0, 5, -2, -5, 7};
    soma = A[0]+ A[1]+ A[5];
    printf("Soma: %d\n",soma);
    A[4] = 100;
    for(i=0;i<6;i++){
        printf("%do position : %d\n",i+1,A[i]);
    }

    return 0;
}
