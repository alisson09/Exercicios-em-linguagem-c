#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    float altChico=1.50,altZe=1.10,ano=0;
    do{
        altChico+=0.02;
        altZe+=0.03;
        ano++;
    }while(altChico>altZe);
    printf("Foi necessario %.0f ano(s) para Ze ficar maior que Chico\n",ano);
    printf("Altura final do Chico: %.2fm\n",altChico);
    printf("Altura final do Ze: %.2fm",altZe);

    return 0;
}
