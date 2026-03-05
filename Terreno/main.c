#include <stdio.h>

int main()
{
   double larg, comp, valor, area, preco;

   printf("Qual a largura do terreno? ");
   scanf("%lf", &larg);
   printf("Qual o comprimento do terreno? ");
   scanf("%lf", &comp);
   printf("Qual o valor do metro quadrado? ");
   scanf("%lf", &valor);

   area = larg * comp;
   preco = area * valor;

   printf("Area do terreno: %.2lf\n", area);
   printf("Valor do terreno: %.2lf\n", preco);




    return 0;
}
