#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int a,b,i,cont=0, x, aux, soma = 0;
    printf("Digite N1: ");
    scanf("%d",&a);
    printf("Digite N2: ");
    scanf("%d",&b);

    if(a>b){
        aux=a;
        a=b;
        b=aux;
    }

    for(i=a;i<=b;i++){
            cont=0;
        for(x=1;x<=i;x++){
            if(i%x==0){
                cont++;
            }
        }
        if(cont==2){
            printf("E primo: %d\n",i);
            soma++;
        }else if(cont!=2 || x==1){
            printf("Nao e primo: %d\n",i);
        }
    }
    printf("Qntd de numeros primos nesse intervalo: %d",soma);

    return 0;
}
