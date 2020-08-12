#include <stdio.h>
#include <stdlib.h>

int main (){
    float a,b,c;
    a = 780000*0.46;
    b = 780000*0.32;
    c = 780000 - (a+b);
    printf("o primeiro do primeiro ganhador e = %.2f\n",a);
    printf("o primeiro do segundo ganhador e = %.2f\n",b);
    printf("o primeiro do terceiro ganhador e = %.2f",c);

    return 0;
}
