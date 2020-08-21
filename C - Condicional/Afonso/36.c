#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float venda,comissao;
    printf("Venda mensal: ");
    scanf("%f",&venda);

    if (venda<20000)
    {
        comissao=(venda*0.14)+400;
    }
    else if (venda<40000 && venda>=20000)
    {
        comissao=(venda*0.14)+500;
    }
    else if (venda<60000 && venda>=40000)
    {
        comissao=(venda*0.14)+550;
    }
    else if (venda<80000 && venda>=60000)
    {
        comissao=(venda*0.14)+600;
    }
    else if (venda<100000 && venda>=80000)
    {
        comissao=(venda*0.14)+650;
    }
    else
    {
        comissao=(venda*0.16)+700;
    }

    printf("Comissao do vendedor: %0.2f",comissao);
    return 0;
}

