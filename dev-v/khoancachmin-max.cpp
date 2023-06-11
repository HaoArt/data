#include <iostream>
using namespace std;
int main(){
    int n,max=0,b,c;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int min=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]) max=a[i];
        if(min>a[i]) min=a[i];
}
    for(int i=0;i<n;i++){
        if(max==a[i]) b=i;
        if(min==a[i]) c=i;
    }
    if(b>c) cout<<b-c;
    else cout<<c-b;
    
    return 0;
}
