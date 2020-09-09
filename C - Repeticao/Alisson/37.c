#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int i,j,a,b,res,pow;
    for(i=1000;i<=9999;i++){
        a=i/100;
        b=i%100;
        res=a+b;
        pow=res*res;
        if(i==pow){
            printf("Os numero que possuem essa propriedade sao %d\n",i);
        }
    }

    return 0;
}

