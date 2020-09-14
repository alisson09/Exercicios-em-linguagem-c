#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

main() {
	int valor,n1=0,n2=0,n5=0,n10=0,n25=0,n50=0,n100=0;
	printf("Digite o valor a ser sacado: ");
	scanf("%d",&valor);
	while(valor>0) {
		if(valor>=100){
            valor=valor-100;
            n100++;
        }else if(valor>=50){
            valor=valor-50;
            n50++;
        }else if(valor>=25){
            valor=valor-25;
            n25++;
        }else if(valor>=10){
		    valor=valor-10;
		    n10++;
        }else if(valor>=5){
            valor=valor-5;
            n5++;
        }else if(valor>=2){
            valor=valor-2;
            n2++;
        }else{
            valor=valor-1;
            n1++;
		}
	}
	printf("Quantidade de notas de 100: %d\n",n100);
	printf("Quantidade de notas de 50: %d\n",n50);
	printf("Quantidade de notas de 25: %d\n",n25);
	printf("Quantidade de notas de 10: %d\n",n10);
	printf("Quantidade de notas de 5: %d\n",n5);
	printf("Quantidade de notas de 2: %d\n",n2);
	printf("Quantidade de notas de 1: %d",n1);

    return 0;
}
