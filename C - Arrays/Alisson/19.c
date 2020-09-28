#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[50];
    int i,j;
    for(i=0;i<50;i++){
        v[i]=(i+5*i)%(i+1);
    }
    for(j=0;j<50;j++){
        printf("%do valor: %d\n",j+1,v[j]);
    }

    return 0;
}
