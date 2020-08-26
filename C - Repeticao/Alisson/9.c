#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int i,n,v=1;
    printf("digite um valor: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d\n",v);
        v=v+2;
    }
    return 0;
}

