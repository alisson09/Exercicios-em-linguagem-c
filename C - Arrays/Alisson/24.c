#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int a[10] = {1,21,3,20,5,6,7,8,9,10};
    int b[10] = {170,150,160,196,183,180,167,165,174,191};
    int i,maior = b[0],  menor = b[0],pos = 0, pos2 = 0;
    for (i = 0; i < 10; i++){
        if(b[i]>maior){
            maior = b[i];
            pos=a[i];
        }
        if(b[i]<menor){
            menor = b[i];
            pos2=a[i];
        }
    }
        printf("Maior: %d, Cod: %d\n",maior,pos);
        printf("Menor: %d, Cod: %d",menor,pos2);

    return 0;
}
