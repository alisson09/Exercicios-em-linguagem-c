#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int a[10], b[10], c[10], i, j, pos=0, pos1=0;
    srand(time(NULL));

    for (i = 0; i < 10; i++){
        a[i] = rand() % 50;
        printf("Vet A: %d\n",a[i]);
    }
    printf("\n");
    for(j=0;j<10;j++){
        if(a[j]%2==0){
            b[j]=a[j];
            printf("Vet B: %d, Pos: %d\n",b[j],pos);
            pos++;
        }else{
            c[j]=a[j];
            printf("Vet C: %d, Pos: %d\n",c[j],pos1);
            pos1++;
        }
    }

    return 0;
}
