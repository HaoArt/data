#include <stdio.h>
#include <math.h>
 
long long Coso2(int So10) // Ctrl H => find & replace
{
    long long So2= 0;
    int p = 0;
    while (So10 > 0)
    {
        So2 += (So10 % 2) * pow(10, p);
        ++p;
        So10 /= 2;
    }
    return So2;
}
 
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", Coso2(n));
}

