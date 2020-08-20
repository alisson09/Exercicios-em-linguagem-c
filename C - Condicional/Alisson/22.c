#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int idade,tempo;
    printf("Digite a idade do trabalhador: ");
    scanf("%d",&idade);
    printf("Digite o tempo de servico: ");
    scanf("%d",&tempo);
    if(idade<=tempo){
        printf("Dados invalidos");
    }else if(idade>=65){
        printf("Pode se aposentar!");
    }else if(tempo>=30){
        printf("Pode se aposentar!");
    }else if(idade>=60 && tempo>=25){
        printf("Pode se aposentar");
    }else{
        printf("Nao pode se aposentar!");
    }

    return 0;
}
