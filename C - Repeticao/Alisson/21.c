#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int i,n,x,soma=0,soma1=1;
    printf("Digite um numero: ");
    scanf("%d",&n);
    printf("Digite outro numero: ");
    scanf("%d",&x);
    if(n>x){
        for(i=x;i<=n;i++){
            if(i%2==0){
                printf("Par: %d\n",i);
                soma=soma+i;
            }else if(i%2!=0){
                printf("Impar: %d\n",i);
                soma1=soma1*i;
            }
        }
    }else if(x>n){
        for(i=n;i<=x;i++){
            if(i%2==0){
                printf("Par: %d\n",i);
                soma=soma+i;
            }else if(i%2!=0){
                printf("Impar: %d\n",i);
                soma1=soma1*i;
            }
        }
    }

    printf("A soma dos numeros pares desse intervalo de numeros e = %d\n",soma);
    printf("A multiplicacao dos numeros impares desse intervalo de numeros e = %d",soma1);

    return 0;
}

