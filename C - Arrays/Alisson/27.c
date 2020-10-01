#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAMANHO 10

int main()
{
    int n[TAMANHO] = {13,24,15,22,11,19,18,23,25,47,};
    int d,i,limite, verifica=1;

    for(i=0; i<TAMANHO; i++)
    {
        if (n[i] > 1) { 
            d = 2;
            verifica = 1;
            limite = sqrt(n[i]); 
            while(verifica && d <= limite) 
             {
                if (n[i] % d  == 0){
                    verifica = 0;
                }
                d++;
             }
            if (verifica) 
                printf("O numero %d, na posicao: n[%d] e primo.\n", n[i],i);
        }
    }
    return 0;
}
