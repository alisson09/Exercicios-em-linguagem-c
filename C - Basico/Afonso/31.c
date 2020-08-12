#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Seu numero antecessor: %d \n",(num-1));
    printf("Seu numero sucessor: %d",(num+1));
    return 0;
}
