#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[10]={1,2,3,-4,-5,6,-7,8,9,10};
    int i;
    for(i=0;i<10;i++){
        if(v[i]<0){
            v[i]=0;
        }
        printf("%do valor: %d\n",i+1,v[i]);
    }


    return 0;
}
