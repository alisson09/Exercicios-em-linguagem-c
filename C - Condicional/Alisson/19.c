#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int num,res,v1,v2;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);
    if(num%3==0 && num%5==0){
        printf("o numero e divisivel por 3 e por 5");
    }else if(num%3==0 && num%5!=0){
        printf("O numero e divisivel somente por 3");
    }else if(num%5==0 && num%3!=0){
        printf("O numero e divisivel somente por 5");
    }else{
        printf("O numero nao e divisivel por 3 ou 5");
    }
    
    return 0;
}
