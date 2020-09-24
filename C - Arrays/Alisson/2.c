#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int A[6] = {1,2,7,9,8,-2};
    for(i=0;i<6;i++){
        printf("%do posicao: %d\n",i+1,A[i]);
    }

    return 0;
}
