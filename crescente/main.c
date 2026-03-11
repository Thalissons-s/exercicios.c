#include <stdio.h>

int main()
{
    int a, b;

    printf("Digite dois numeros:\n");
    scanf("%d", &a);
    scanf("%d", &b);

    while ( a != b ){
        if(a > b){
            printf("Crescente\n");
        }
        else{
            printf("Decrescente\n");
        }
    printf("Digite outros dois numeros: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    }

    return 0;
}
