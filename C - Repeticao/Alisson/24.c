#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int n,i,soma=0;
    printf("Digite um numero:");
    scanf("%d",&n);
    printf("Os divisores de %d excluindo o proprio %d sao: ",n,n);
    for(i=1;i<=n;i++){
        if(n%i==0 && n!=i){
            printf("%d ",i);
            soma+=i;
        }
    }
    printf("\nA soma dos divisores de %d excluindo o proprio %d e = %d",n,n,soma);

    return 0;
}

