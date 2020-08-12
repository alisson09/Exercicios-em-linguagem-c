#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    printf("Resultado: %d",( ((num*3)+1) + ((num*2)-1) ));
    return 0;
}
