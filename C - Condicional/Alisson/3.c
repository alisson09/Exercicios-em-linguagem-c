#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float a,b;
    printf("Digite um numero: ");
    scanf("%f",&a);
    if(a>0){
        b = sqrt(a);
        printf("A raiz quadrada de %.2f e = %.2f",a,b);
    }else{
        b = pow(a,2);
        printf("O quadrado de %.2f e = %.2f",a,b);
    }

    return 0;
}
