#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int v[6] = {2,8,12,-4,-6,10};

    for (int i = 5; i >= 0; i--){
        printf("Vetor[%d] = %d\n",i,v[i]);
    }
    return 0;
}
