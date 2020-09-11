#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int num1=0,num2=1,num3,soma=0;
        printf("0\n1\n");
        while (num2 <= 4000000){
            num3 = num2 + num1;
            printf("%d\n",num3);
            num1 = num2;
            num2 = num3;
            if(num3%2==0 && num3<4000000 ){
                soma+=num3;
            }
        }
    printf("\nRes: %d",soma);

    return 0;
}