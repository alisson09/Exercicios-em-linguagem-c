#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int a[100], i, j = 0;
    for (i = 0; i < 100; i++){
        while (j%7==0||j%10==7){
            j = j + 1;
        }
        a[i] = j;
        j = j + 1;
    }

    printf("Vetor gerado:\n");
    for (i = 0; i < 100; i++){
        printf("%d\t", a[i]);
    }

    return 0;
}
