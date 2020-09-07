#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n,i,d1,d2,cont1=0,cont2=0,cont3=0;
    printf("Digite o numero de rolagens: ");
    scanf("%d",&n);
    srand(time(NULL));
    for(i=1;i<=n;i++){
        d1 = rand() % 7;
        d2 = rand() % 7;
        if(d1>d2){
            cont1++;
        }else if(d2>d1){
            cont2++;
        }else if(d1==d2){
            cont3++;
        }
    }
    printf("D1 foi maior que D2 %d vezes\n",cont1);
    printf("D2 foi maior que D1 %d vezes\n",cont2);
    printf("D1 foi igual a D2 %d vezes",cont3);
    return 0;
}