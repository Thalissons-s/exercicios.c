#include <stdio.h>

int main()
{
    double nota1, nota2, Notafinal;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    Notafinal = nota1 + nota2;

    printf("Nota final %.1lf\n", Notafinal);

    if (Notafinal < 60 ){
        printf("Reprovado\n");
    }

    return 0;
}
