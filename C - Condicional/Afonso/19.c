#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
   int num;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    if(num%3==0 && num%5 != 0)
    {
        printf("Divisivel por 3, mas nao simultaneamente por 5");
    }
    else if(num%5==0 && num%3 != 0)
    {
        printf("Divisivel por 5, mas nao simultaneamente por 3");
    }
    else if(num%5==0 && num%3 == 0)
    {
        printf("Divisivel por 3 e 5, simultaneamente");
    }
    else
    {
        printf("Numero nao divisivel por 3 ou 5");
    }

return 0;
}
