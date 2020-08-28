#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int n,i;
    printf("Digite um numero: ");
    scanf("%d",&n);
    printf("E divisor de %d: ",n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }

    return 0;
}

