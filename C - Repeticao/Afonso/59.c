#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int opcao, numHab, x=0, codRes=0, codCom=0, codInd=0;
    float consumoAtual, consRes=0, consCom=0, consInd=0, kwAtual;

    printf("Numero de Habitantes: ");
    scanf("%d",&numHab);

    do
    {
        printf("=======================\n");
        printf("Codigo do consumidor\n");
        printf("1: Residencial\n");
        printf("2: Comercial\n");
        printf("3: Industrial\n");
        
        printf("Opcao desejada: ");
        scanf("%d",&opcao);

        if (opcao==1 || opcao==2 || opcao==3)
        {
            printf("Consumo Atual: ");
            scanf("%f",&consumoAtual);
            
            if (opcao==1)
            {
                codRes++;
                consRes += consumoAtual;
            }
            if (opcao==2)
            {
                codCom++;
                consCom += consumoAtual;
            }
            else
            {
                codInd++;
                consInd += consumoAtual;
            }
            x++;
        }
        else
        {
            printf("Opcao Invalida\n");
        }
    } while (x!=numHab);
    printf("\n");
    if(consRes<consCom && consRes<consInd)
    {
        printf("O menor consumo foi no setor residencial!\n");
    }
    else if(consCom<consRes && consCom<consInd)
    {
        printf("O menor consumo foi no setor comercial!\n");
    }
    else if(consInd<consRes && consInd<consCom)
    {
        printf("O menor consumo foi no setor industrial!\n");
    }

    if(consRes>consCom && consRes>consInd)
    {
        printf("O maior consumo foi no setor residencial!\n");
    }
    else if(consCom>consRes && consCom>consInd)
    {
        printf("O maior consumo foi no setor comercial!\n");
    }
    else if(consInd>consRes && consInd>consCom)
    {
        printf("O maior consumo foi no setor industrial!\n");
    }
    printf("Consumo Total Residencial: %0.2f\n", consRes );
    printf("Consumo Total Comercial: %0.2f\n",  consCom );
    printf("Consumo Total Industrial: %0.2f\n",  consInd );
    printf("Media Total: %0.2f\n", ( (consInd+consRes+consCom)/numHab ) );

    return 0;
}