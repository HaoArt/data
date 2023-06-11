#include <stdio.h>
int Sum(int n) {
   int s = 0;
   while (n > 0) {
      s += n % 10;
      n /= 10;
   }
   return s;
}

int main() {
   int n,a,b, s = 0;
   scanf("%d", &n);
   scanf("%d %d", &a, &b);

   for (int i = 1; i <= n; i++) {
      int Tong = Sum(i);
      if (Tong >= a && Tong <= b) {
         s += i;
      }
   }

   printf("%d",s);

   return 0;
}

