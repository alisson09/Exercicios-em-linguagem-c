#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    int a,b,soma,pergunta=1,certo=0,errado=0,res;
    srand( (unsigned)time(NULL) );

    if (pergunta<7)
    {
        if (pergunta==1)
        {
            pergunta++;
            a = rand() % 101;
            b = rand() % 101;
            res = a + b;
            printf("Pergunta 1: %d + %d = ",a,b);
            scanf("%d",&soma);
             if (soma==res)
            {
                certo++;
            }
            else
            {
                errado++;
            }
            printf("Pergunta 1: Resultado = %d\n",res);
        }
        if (pergunta==2)
        {
            pergunta++;
            a = rand() % 101;
            b = rand() % 101;
            res = a + b;
            printf("Pergunta 2: %d + %d = ",a,b);
            scanf("%d",&soma);
             if (soma==res)
            {
                certo++;
            }
            else
            {
                errado++;
            }
            printf("Pergunta 2: Resultado = %d\n",res);
        }
        if (pergunta==3)
        {
            pergunta++;
            a = rand() % 101;
            b = rand() % 101;
            res = a + b;
            printf("Pergunta 3: %d + %d = ",a,b);
            scanf("%d",&soma);
             if (soma==res)
            {
                certo++;
            }
            else
            {
                errado++;
            }
            printf("Pergunta 3: Resultado = %d\n",res);
        }
        if (pergunta==4)
        {
            pergunta++;
            a = rand() % 101;
            b = rand() % 101;
            res = a + b;
            printf("Pergunta 4: %d + %d = ",a,b);
            scanf("%d",&soma);
             if (soma==res)
            {
                certo++;
            }
            else
            {
                errado++;
            }
            printf("Pergunta 4: Resultado = %d\n",res);
        }
        if (pergunta==5)
        {
            pergunta++;
            a = rand() % 101;
            b = rand() % 101;
            res = a + b;
            printf("Pergunta 5: %d + %d = ",a,b);
            scanf("%d",&soma);
             if (soma==res)
            {
                certo++;
            }
            else
            {
                errado++;
            }
            printf("Pergunta 5: Resultado = %d\n",res);
        }
        if (pergunta==6)
        {
            printf("Respostas Corretas: %d\n",certo);
            printf("Respostas Erradas: %d",errado);
        }
    }
    return 0;
}
