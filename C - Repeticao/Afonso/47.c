#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int opcao;
    float num1,num2;

    printf("=======================\n");
    printf("1: Adicao\n");
    printf("2: Subtracao\n");
    printf("3: Multiplicacao\n");
    printf("4: Divisao\n");
    printf("5: Finalizar programa\n");
    do
    {
        printf("Opcao desejada: ");
        scanf("%d",&opcao);

        if (opcao==1 || opcao==2 || opcao==3 || opcao==4)
        {
            printf("Numero 1: ");
            scanf("%f",&num1);
            printf("Numero 2: ");
            scanf("%f",&num2);
            if (opcao==1)
            {
                printf("%0.2f + %0.2f = %0.2f\n",num1,num2,(num1+num2));
            }
            else if (opcao==2)
            {
                printf("%0.2f - %0.2f = %0.2f\n",num1,num2,(num1-num2));
            }
            else if (opcao==3)
            {
                printf("%0.2f x %0.2f = %0.2f\n",num1,num2,(num1*num2));
            }
            else
            {
                printf("%0.2f / %0.2f = %0.2f\n",num1,num2,(num1/num2));
            }            
            printf("=======================\n");
            printf("1: Adicao\n");
            printf("2: Subtracao\n");
            printf("3: Multiplicacao\n");
            printf("4: Divisao\n");
            printf("5: Finalizar programa\n");
        }
    } while (opcao!=5);
    printf("Programa Finalizado");
    return 0;
}