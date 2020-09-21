#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
  int i,num,cont=0;

  do{
    printf("Digite um numero inteiro e positivo maior do que 1: ");
    scanf("%d",&num);
  }while (num<=1);

  for (i=1;i<=num;i++) {
    if(num%i==0) {
     cont++;
    }
  }

  if (cont==2){
    printf("O numero %d e primo!",num);
  }else{
    printf("O numero %d nao e primo!",num);
  }

  return 0;
}
