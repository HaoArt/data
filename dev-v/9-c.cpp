#include<stdio.h>
#include<math.h>

int main()
{
    int  a,b,c;
    float P,S;
    scanf("%d%d%d",&a,&b,&c);
    P=(a+b+c)/2;
    S=sqrt(P*(P-a)*(P-b)*(P-c));
    if (1<=a&&b&&c<=50000)
    {
        printf("%.6f",S);
    }
    else
    printf("No Solution.");
    return 0;
}
