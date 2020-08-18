#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int op,res,v1,v2;
    printf("Digite 1 para adicao, 2 para subtracao, 3 para multiplicacao ou 4 para divisao: ");
    scanf("%d",&op);
    if(op == 1){
        printf("Digite 2 valores para serem calculados: ");
        scanf("%d %d",&v1,&v2);
        res = v1+v2;
        printf("O resultado da operacao e = %d",res);
    }else if(op == 2){
        printf("Digite 2 valores para serem calculados: ");
        scanf("%d %d",&v1,&v2);
        res = v1-v2;
        printf("O resultado da operacao e = %d",res);
    }else if(op == 3){
        printf("Digite 2 valores para serem calculados: ");
        scanf("%d %d",&v1,&v2);
        res = v1*v2;
        printf("O resultado da operacao e = %d",res);
    }else if(op == 4){
        printf("Digite 2 valores para serem calculados: ");
        scanf("%d %d",&v1,&v2);
        res = v1/v2;
        printf("O resultado da operacao e = %d",res);
    }
    return 0;
}
