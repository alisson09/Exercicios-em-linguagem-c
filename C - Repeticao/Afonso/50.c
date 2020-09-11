#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    float anos=0,chico=1.50,ze=1.10;
    
    do
    {
        chico += 0.02;
        ze += 0.03;
        anos++;
    } while (chico>ze);
    
    printf("Total de anos %0.0f\n",anos);
    printf("Altura Chico: %0.2f\n",chico);
    printf("Altura Ze: %0.2f\n",ze);
    
    return 0;
}