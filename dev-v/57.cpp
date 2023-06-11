#include <iostream> 
using namespace std;
int main() { 
    long long n,tg;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    for(int i = 0; i < n - 1; i++)   
        for(int j = i + 1; j < n; j++){
            if(abs(a[i]) < abs(a[j])){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    for (int i=0;i<n;i++) {
        if(abs(a[i])==abs(a[i+1])&&a[i]<a[i+1]){
            tg=a[i];
            a[i]=a[i+1];
            a[i+1]=tg;
    }
    }
    for (int i=0;i<n;i++) cout<<a[i]<<" ";
  return 0; 
}
