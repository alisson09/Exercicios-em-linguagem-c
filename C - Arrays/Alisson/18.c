#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[10]={1,2,3,4,5,6,7,8,9,10};
    int i,x=2,cont=0;
    for(i=0;i<10;i++){
        if(v[i]%v[x]==0){
            printf("Multiplo de %d presentes no vetor: %d\n",v[x],v[i]);
            cont++;
        }
    }
    printf("Tem %d multiplos de %d no vetor!",cont,v[x]);

    return 0;
}
