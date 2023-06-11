#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double a1,b1,c1,a2,b2,c2;
        cin>>a1>>b1>>c1>>a2>>b2>>c2;
        double d=a1*b2-a2*b1;
        if(d==0)
        {
            if(c1*b2==c2*b1&&a1*c2==a2*c1) cout<<"Many solutions"<<endl;
            else cout<<"No solution"<<endl;
        }
        else
        {
            double x=(c1*b2-c2*b1)/d,y=(a1*c2-a2*c1)/d;
            printf("%.6lf %.6lf\n",x,y);
        }
    }
    return 0;
}
