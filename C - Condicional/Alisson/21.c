#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int esc,n1,n2,res;
    printf("Escolha uma das opcoes abaixo!\n");
    printf("1-Soma de 2 numeros\n");
    printf("2-Diferenca entre 2 numeros (maior pelo menor)\n");
    printf("3- Produto entre 2 numeros\n");
    printf("4- Divisao entre 2 numeros (o denominador nao pode ser zero)\n");
    scanf("%d",&esc);
    if(esc == 1){
        printf("Escolha os 2 numeros: ");
        scanf("%d %d",&n1,&n2);
        res = n1+n2;
        printf("O resultado e = %d",res);
    }else if(esc == 2){
        printf("Escolha os 2 numeros: ");
        scanf("%d %d",&n1,&n2);
            if(n1>n2){
                res = n1-n2;
                printf("O resultado e = %d",res);
            }else{
                res=n2-n1;
                printf("O resultado e = %d",res);
            }
    }else if(esc == 3){
        printf("Escolha os 2 numeros: ");
        scanf("%d %d",&n1,&n2);
        res = n1*n2;
        printf("O produto e = %d",res);
    }else if( esc == 4){
        printf("Escolha os 2 numeros: ");
        scanf("%d %d",&n1,&n2);
            if(n2 == 0){
                printf("O denominador deve ser maior que zero");
            }else{
                res = n1/n2;
                printf("O resultado da divisao e = %d",res);
            }
    }

    return 0;
}
