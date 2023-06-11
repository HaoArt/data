#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n,m;
    float tg,s=0;
    cin>>n>>m;
    float a[n];
    for (int i=0;i<n;i++) {cin>>a[i];
        if(a[i]<0||a[i]>10) return 0;}
    for(int i = 0; i < n - 1; i++)   
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    for (int i=0;i<m;i++) s+=a[i];
    cout<<setprecision(1)<<fixed<<s;
    return 0;
}
