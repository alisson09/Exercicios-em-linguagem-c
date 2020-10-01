#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAMANHO 10
//Convenção verifica = 1 --> O numero é primo
//          verifica = 0 --> O numero não é primo
int main(int argc, char const *argv[])
{
    int n[TAMANHO] = {13,24,15,22,11,19,18,23,25,47,};
    int d,i,limite, verifica=1;

    for(i=0; i<TAMANHO; i++)
    {
        if (n[i] > 1) { //só verifica se o número for maior que 1
            d = 2;
            verifica = 1;
            limite = sqrt(n[i]); // determina o limite de busca de dividendos até a raiz quadrada do número analisado
            while(verifica && d <= limite) //laço de verificação
             {
               //se o número for divisível por d, este não é primo
                if (n[i] % d  == 0){ 
                    //define como não primo
                    verifica = 0;
                }
                //incrementa o número para testar
                d++;
             } 
            // imprime se primo
            if (verifica) // é o mesmo que verifica == 1
                printf("O número %d, na posição: n[%d] é primo.\n", n[i],i);
        }
    }
    return 0;   
}