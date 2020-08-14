#include <stdio.h>
#include <stdlib.h>

int main (){
    char let,res;
    printf("Digite uma letra maiuscula: ");
    scanf("%c",&let);
    res = let+32;
    printf("A letra minuscula e %c",res);

    return 0;
}
