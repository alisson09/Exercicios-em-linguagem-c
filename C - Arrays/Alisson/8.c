#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int v[6] = {5,8,20,-9,-6,30};

    for (int i = 5; i >= 0; i--){
        printf("Vetor[%d] = %d\n",i,v[i]);
    }
    return 0;
}
