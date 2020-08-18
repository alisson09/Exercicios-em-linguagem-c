#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float n1,n2,n3,mp;
    printf("Digite a nota do trabalho de laboratorio: ");
    scanf("%f",&n1);
    printf("Digite a nota da avaliacao semestral: ");
    scanf("%f",&n2);
    printf("Digite a nota do exame final: ");
    scanf("%f",&n3);
    mp = (n1*2+n2*3+n3*5)/(2+3+5);
    if(mp<=2.9){
        printf("A media ponderada das notas e = %.2f e o aluno foi reprovado",mp);
    }else if(mp>=3 && mp<=4.9){
        printf("A media ponderada das notas e = %.2f e o aluno esta de recuperacao",mp);
    }else if(mp>=5){
        printf("A media ponderada das notas e = %.2f e o foi aprovado",mp);
    }

    return 0;
}
