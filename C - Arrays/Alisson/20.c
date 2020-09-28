#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int v[10], v1[10], i, j=0;
    srand(time(NULL));

    for (i = 0; i < 10; i++){
        v[i] = rand() % 50;
        printf("%d ", v[i]);

        if (v[i] % 2 != 0){
            v1[j] = v[i];
            j++;
        }
    }
    printf("\n");
    for (int m = 0; m < j; m++){
        printf("%d ", v1[m]);
    }

    return 0;
}
