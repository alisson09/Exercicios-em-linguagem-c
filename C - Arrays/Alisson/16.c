#include <stdio.h>
#include <stdlib.h>

int main(){
    float v[5]={1.5,5.2,9.3,6.9,8};
    int i,esc;
    printf("Escolha uma das tres opcoes!\n");
    printf("0: Finaliza o programa, 1: Vetor mostrado na ordem direta, 2: Vetor na ordem inversa\n");
    scanf("%d",&esc);
    switch(esc){
        case 0:
            printf("Finalizando o programa!");
            exit(1);
            break;
        case 1:
            for(i=0;i<5;i++){
                printf("%.1f ",v[i]);
            }
                break;
        case 2:
            for(i=4;i>=0;i--){
                printf("%.1f ",v[i]);
            }
                break;
        default:
            printf("Codigo invalido!");
            break;
    }

    return 0;
}
