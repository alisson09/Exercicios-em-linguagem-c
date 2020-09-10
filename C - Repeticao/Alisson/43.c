#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int idade,media,idTot,cont=0;
    do{
        printf("Digite a idade: ");
        scanf("%d",&idade);
        if(idade>0){
        idTot+=idade;
        cont++;
        }else if(idade<=0){
            printf("Numero invalido!\n");
        }
    } while (idade>0);
    media=idTot/cont;
    printf("A media das idades e: %d anos",media);

    return 0;
}
