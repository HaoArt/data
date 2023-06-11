#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long n,m=2,a,s,b,c;
    cin>>n;
    c=n;
    s=n*n;
    if(n==1||n==9) {cout<<"YES"; return 0;}
    for(int i=0;i<6;i++){
        if(n/10<10) break;
        else 
            n=n/10;
            m++;
    }
    a=pow(10,m);
    b=s/a+s%a;
    if(b==c) cout<<"YES";
        else cout<<"NO";
}
