#include <stdio.h>

int main()
{
    int primeiro, segundo, terceiro;

    printf("Primeiro valor: ");
    scanf("%d", &primeiro);
    printf("Segundo valor: ");
    scanf("%d", &segundo);
    printf("Terceiro valor: ");
    scanf("%d", &terceiro);

    if(primeiro < segundo && primeiro < terceiro){
        printf("Menor: %d\n", primeiro);
    }
    else {
        if(segundo < primeiro && segundo < terceiro){
            printf("Menor: %d\n", segundo);
        }
        else {
            printf("Menor: %d\n", terceiro);
        }
    }


    return 0;
}
