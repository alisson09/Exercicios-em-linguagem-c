#include <stdio.h>

int main(){
    int i,j,n,t,ni,mnp = 0;
    for (i = 100; i < 1000; i++){
        for (j = i; j < 1000; j++){
            n = i * j;
            if (n > mnp) {
                ni = 0;
                for (t = n; t > 0; t /= 10){
                    ni = ni * 10 + t % 10;
                }
                if (n == ni) {
                    mnp = n;
                }
            }
        }
    }
    printf("Maior numero palindromo feito a partir do produto de dois numeros de 3 digitos: %d\n", mnp);
    return 0;
}
