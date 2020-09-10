#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int num,num1=0,num2=1,num3;
    printf("Digite um numero positivo: ");
    scanf("%d",&num);
    if (num>0){
        printf("0, 1");
        while (num2 <= num){
            num3 = num2 + num1;
            printf(", %d",num3);
            num1 = num2;
            num2 = num3;
        }
    }else{
        printf("Numero invalido!\n");
    }
    return 0;
}