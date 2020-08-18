#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float nota1,nota2,nota3,media;
    printf("Nota 1: ");
    scanf("%f",&nota1);
    printf("Nota 2: ");
    scanf("%f",&nota2);
    printf("Nota 3: ");
    scanf("%f",&nota3);

    media = ((nota1*1) + (nota2*1) + (nota3*2) / 4);
    if(media>=60)
    {
        printf("Aluno Aprovado, media: %f",media);
    }
    else
    {
        printf("Aluno Reprovado, media: %f",media);
    }
    return 0;
}
