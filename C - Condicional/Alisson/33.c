#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float preco,aum,res;
    printf("Digite o preco do produto: ");
    scanf("%f",&preco);
    if(preco < 50){
        aum = preco*0.05;
        res = preco+aum;
        printf("Devido ao aumento sofrido o novo preco e = %.2f",res);
    }else if(preco >= 50 && preco <= 100){
        aum = preco*0.10;
        res = preco+aum;
        printf("Devido ao aumento sofrido o novo preco e = %.2f",res);
    }else if(preco > 100){
        aum = preco*0.15;
        res = preco+aum;
        printf("Devido ao aumento sofrido o novo preco e = %.2f",res);
    }
    if(res <= 80){
        printf("\nBarato!");
    }else if(res > 80 && res <= 120){
        printf("\nNormal");
    }else if(res > 120 && res <= 200){
        printf("\nCaro");
    }else if((res > 200)){
        printf("\nMuito caro");
    }

    return 0;
}
