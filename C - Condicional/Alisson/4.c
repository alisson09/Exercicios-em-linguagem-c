#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float a,b,c;
    printf("Digite um numero: ");
    scanf("%f",&a);
    if(a>0){
        b = sqrt(a);
        c = pow(a,2);
        printf("A raiz quadrada de %.2f e = %.2f e o quadrado de %.2f e = %.2f",a,b,a,c);
    }else{
        printf("Numero invalido");
    }

    return 0;
}
