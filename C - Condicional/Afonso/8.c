#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float nota1, nota2;
    printf("Nota 1: ");
    scanf("%f", &nota1);

    if (nota1>=0.0 && nota1<=10.0)
    {
        printf("Nota 2: ");
        scanf("%f", &nota2);

        if (nota2>=0.0 && nota2<=10.0)
        {
            printf("Media: %0.2f",((nota1+nota2)/2) );
        }
        else
        {
            printf("Nota 2 invalida");
        }  
    }
    else
    {
        printf("Nota 1 invalida");
    }
    

    return 0;
}
