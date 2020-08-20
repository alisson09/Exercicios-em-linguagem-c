#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
   float a,b,c;
   printf("Valor A: ");
   scanf("%f",&a);
   printf("Valor B: ");
   scanf("%f",&b);
   printf("Valor C: ");
   scanf("%f",&c);

   if ( (a+b<c || a+c<b || b+c<a ) ) 
   {
       printf("Comprimento Invalido. Nao forma um triangulo");
   }
   else
   {
       if(a==b && a==c){
            printf("Triangulo Equilatero");
        }
        else if(a==b || a==c || b==c){
            printf("Triangulo Isosceles");
        }
        else if(a!=b && a!=c && b!=c){
            printf("Triangulo Escaleno");
        }
   }
return 0;
}
