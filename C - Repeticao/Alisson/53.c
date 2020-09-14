#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

main() {
	int linha,j,i,c=0;
	printf("Digite a quantidade de linhas: ");
	scanf("%d",&linha);
	for(i=1;i<=linha;i++){
        for(j=1;j<=i;j++){
            c++;
            printf("%d ",c);
        }
        printf("\n");
	}

    return 0;
}
