#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int i,v[15];
    float media=0;
    srand(time(NULL));
    for (i = 0; i < 15; i++){
        v[i] = rand()%10;
        printf("Nota do %do: %d\n",i+1,v[i]);
        media+=v[i];
    }
    printf("Media das notas: %.2f",(media/15));
    return 0;
}
