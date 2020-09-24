#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int i,A[10] = {1,2,3,4,5,6,12,8,9,10},cont=0;
    for(i=0;i<10;i++){
        if(A[i]%2==0){
            printf("E par: %d\n",A[i]);
            cont++;
        }
    }
    printf("Foram lidos %d valores pares",cont);
    return 0;
}
