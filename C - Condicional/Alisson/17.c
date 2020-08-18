#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int bMaior,bMenor,h,res;
    printf("Digite o valor da base maior: ");
    scanf("%d",&bMaior);
    printf("Digite o valor da base menor: ");
    scanf("%d",&bMenor);
    printf("Digite o altura do trapezio: ");
    scanf("%d",&h);
    if(bMaior>0 && bMenor>0){
        res = ((bMaior + bMenor)*h)/2;
        printf("A area do trapezio e = %d",res);
    }else if(bMaior<=0){
        printf("O valor da base maior tem que ser maior que 0");
    }else if(bMenor<=0){
        printf("O valor da base menor tem que ser maior que 0");
    }

    return 0;
}
