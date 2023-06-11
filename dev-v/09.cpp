#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main (){
double a,b,c,P,S;
cin >>a>>b>>c;
P=(float)(a+b+c)/2;
S=sqrt(P*(P-a)*(P-b)*(P-c));
if((a+b>c)&&(a+c>b)&&(b+c>a)&&(a>0)&&(b>0)&&(c>0))
cout<< setprecision(6) << fixed <<S;
else 
cout <<"No Solution";
return 0;

}
