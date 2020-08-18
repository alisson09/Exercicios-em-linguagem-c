#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num,cen,dez,uni,soma;
        printf("Numero (0 a 999): ");
            scanf("%d",&num);
        if(num<0 || num>999)
            printf("Numero Invalido");
        else{
            if(num>=100){
                cen = num/100;
                dez = num%100;

                uni = dez%10;
                dez = dez/10;

                uni = uni/1;

            soma = cen + dez + uni;
            printf("Valor: %d (%d + %d + %d)",soma,cen,dez,uni);
            }
            if(num<=99 && num>9){
                dez = num/10;
                uni = num%10;

            soma = dez + uni;
            printf("Valor: %d (%d + %d)",soma,dez,uni);
            }

            if(num<=9){
            printf("Valor: %d",num);
            }
        }
    return 0;
}
