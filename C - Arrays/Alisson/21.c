#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int a[10], b[10], c[10], i;
    srand(time(NULL));

    for (i = 0; i < 10; i++){
        a[i] = rand() % 50;
        b[i] = rand() % 50;
        c[i]=a[i]*b[i];
        printf("%d * %d = %d\n",a[i],b[i],c[i]);
    }

    return 0;
}
