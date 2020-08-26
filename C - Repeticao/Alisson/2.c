#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int i,n=0;
    for(i=0;i<100;i++){
        n++;
        printf("%d\n",n);
    }
    return 0;
}

int main (){
    int i=0,n=0;
    while(i<100){
        n++;
        printf("%d\n",n);
        i++;
    }
    return 0;
}

int main (){
    int i=0,n=0;
    do{
      n++;
      printf("%d\n",n);
      i++;
    }while(i<100);
    return 0;
}
