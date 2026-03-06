#include <stdio.h>

int main()
{
   double preco, dinheiro, troco;
   int quantidade;

   printf("Preco unitario do produto: ");
   scanf("%lf", &preco);
   printf("Quantidade comprada: ");
   scanf("%d", &quantidade);
   printf("Dinheiro recebido :");
   scanf("%lf", &dinheiro);

   troco = dinheiro - (quantidade * preco);

   printf("Troco: %.2lf\n", troco);



    return 0;
}
