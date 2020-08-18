#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int n1,n2,n3,mp;
    printf("Digite a nota da primeira prova: ");
    scanf("%d",&n1);
    printf("Digite a nota da segunda prova: ");
    scanf("%d",&n2);
    printf("Digite a nota da terceira prova: ");
    scanf("%d",&n3);
    mp = (n1*1+n2*1+n3*2)/(1+1+2);
    if(mp>=60){
        printf("A media ponderada das notas e = %d e o aluno foi aprovado",mp);
    }else{
        printf("A media ponderada das notas e = %d e o aluno foi reprovado",mp);
    }

    return 0;
}
