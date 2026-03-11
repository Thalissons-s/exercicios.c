#include <stdio.h>

int main()
{
    int a, soma, quantidade;
    double media;

    printf("Digite as idades: \n");
    scanf("%d", &a);

    soma = 0;
    quantidade = 0;
    while(a >= 0){
        soma = soma + a;
        quantidade = quantidade + 1;
        scanf("%d", &a);
    }
    if (quantidade == 0){
        printf("Impossivel calcular");
    }
    else{
    media = (double)soma / quantidade;
    printf("Media: %.2lf\n", media);
    }


    return 0;
}
