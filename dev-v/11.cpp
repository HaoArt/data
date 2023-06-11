#include <stdio.h>
#include <math.h>

int main() {
   double a, b, c, S;
   scanf("%lf %lf %lf", &a, &b, &c);

   S = 0.5 * a * b * sin(c*3.14159/180);

   printf("%.4lf", S);
   return 0;
}


