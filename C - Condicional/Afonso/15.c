#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
   int dia;
        printf("Dia: ");
        scanf("%d",&dia);
            switch(dia){
                case 1:  printf("Domingo");break;
                case 2:  printf("Segunda");break;
                case 3:  printf("Terca");  break;
                case 4:  printf("Quarta"); break;
                case 5:  printf("Quinta"); break;
                case 6:  printf("Sexta");  break;
                case 7:  printf("Sabado"); break;
                default: printf("Numero invalido"); break;
            }
    return 0;
}
