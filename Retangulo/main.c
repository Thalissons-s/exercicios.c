#include <stdio.h>
#include <math.h>

int main()
{
   double x, y, area, perimetro, diagonal;

   printf("Base do retangulo: ");
   scanf("%lf", &x);
   printf("Altura do retangulo: ");
   scanf("%lf", &y);

   area = x * y;
   perimetro = (x * 2) + (y * 2);
   diagonal = sqrt((x * x) + (y * y));

   printf("Area = %.4lf\n", area);
   printf("Perimetro = %.4lf\n", perimetro);
   printf("Diagonal = %.4lf\n", diagonal);



    return 0;
}
