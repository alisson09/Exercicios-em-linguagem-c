#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int i,hab,cod,kwh,consumo;
    float media,gasto1=0,gasto2=0,gasto3=0;
    printf("Digite o numero de habitantes: ");
    scanf("%d",&hab);
    printf("Digite o valor do Kw/h: ");
    scanf("%d",&kwh);
    for(i=1;i<=hab;i++){
        printf("Digite o codigo do consumidor: ");
        scanf("%d",&cod);
        switch(cod){
        case 1:
            printf("Consumo do mes: ");
            scanf("%d",&consumo);
            gasto1+=consumo;
            break;
        case 2:
            printf("Consumo do mes: ");
            scanf("%d",&consumo);
            gasto2+=consumo;
            break;
        case 3:
            printf("Consumo do mes: ");
            scanf("%d",&consumo);
            gasto3+=consumo;
            break;
        default:
            printf("Codigo invalido");
            break;
        }
    }
    media=(gasto1+gasto2+gasto3)/hab;
    if(gasto1<gasto2 && gasto1<gasto3){
        printf("O menor consumo foi no setor residencial!\n");
    }else if(gasto2<gasto1 && gasto2<gasto3){
        printf("O menor consumo foi no setor comercial!\n");
    }else if(gasto3<gasto1 && gasto3<gasto2){
        printf("O menor consumo foi no setor industrial!\n");
    }
    if(gasto1>gasto2 && gasto1>gasto3){
        printf("O maior consumo foi no setor residencial!\n");
    }else if(gasto2>gasto1 && gasto2>gasto3){
        printf("O maior consumo foi no setor comercial!\n");
    }else if(gasto3>gasto1 && gasto3>gasto2){
        printf("O maior consumo foi no setor industrial!\n");
    }
    printf("A media do consumo dos habitantes foi: %.2f Kw/h\n",media);
    printf("O consumo total do setor residencial foi: %.2f Kw/h\n",gasto1);
    printf("O consumo total do setor comercial foi: %.2f Kw/h\n",gasto2);
    printf("O consumo total do setor industrial foi: %.2f Kw/h\n",gasto3);

    return 0;
}
