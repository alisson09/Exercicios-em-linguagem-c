#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int i, j, n, t, ni, mnc = 0;
    for (i = 100; i < 1000; i++){
        for (j = i; j < 1000; j++){
            n = i * j;
            if (n > mnc) {
                ni = 0;
                for (t = n; t > 0; t /= 10){
                    ni = ni * 10 + t % 10;
                }
                if (n == ni) {
                    mnc = n;
                }
            }
        }
    }
    printf("Maior numero: %d\n", mnc);
    return 0;
}