#include <stdio.h>
#include<math.h>
int main() {
    float n,m,p;
    double time;
    scanf("%f%f%f",&n,&m,&p);
    time =log(p/n)/log((1+(m/100)));
    printf("%.0lf", ceil(time));
    return 0;
}
