#include<iostream>
#include<math.h>
using namespace std;

int main (){
    int n,max=0;
    cin>>n;
    int a[n],s[n],m[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        s[i]=0;
        for(int j=2;j<=sqrt(a[i]);j++){
            if (a[i]%j==0) {s[i]=0; break;}
                else s[i]++;}
}
    for(int i=0;i<n;i++)
        if(s[i]!=0&&a[i]>max) max=a[i];
    cout<<max;
return 0;
}
