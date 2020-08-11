#include <stdio.h>
#include <stdlib.h>

int main (){
    int x,y,z,k;
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d",&x, &y, &z);
    k = x + y + z;
    printf("A soma dos numeros foi %d",k);

    return 0;
}
