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
        printf("Vet A: %d\t",a[i]);
        printf("Vet B: %d\t",b[i]);
        if(i%2==0){
            c[i]=a[i];
        }else{
            c[i]=b[i];
        }
        printf("Vet C: %d\n",c[i]);
    }

    return 0;
}
