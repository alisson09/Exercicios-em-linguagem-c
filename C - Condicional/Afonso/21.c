#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
   int opcao;
    float num1,num2,res;

    printf("============\nSoma de dois numeros: 1");
    printf("\nDiferenca entre dois numeros: 2");
    printf("\nProduto entre dois numeros: 3");
    printf("\nDivisao entre dois numeros: 4");
    printf("\nOpcao escolhida: ");
    scanf("%d",&opcao);
    printf("============\n");

    if(opcao>0 && opcao<5){
        printf("Primeiro Valor: ");
            scanf("%f",&num1);
        printf("Segundo Valor: ");
            scanf("%f",&num2);

        if(opcao==1){
                res = num1 + num2;
            }
            else if(opcao==2){
                if(num1>num2){
                    res = num1 - num2;
                }
                else{
                    res = num2 - num1;
                }
            }
            else if(opcao==3){
                res = num1 * num2;
            }
            else{
                if(num2==0){
                    printf("O denominador (Numero 2) nao pode ser zero\n");
                }
                else{
                    res = num1 / num2;
                }
            }
        printf("Resultado: %0.2f",res);
    }
    else{
        printf("Numero de opcao invalida");
    }
return 0;
}
