#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n=0,max=-1e7;
    int a[n]={0};
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(isalnum(s[i])){
            a[n]++;
            if(s[i+1]==' '||s[i+1]=='.'||s[i+1]=='!') {
                n++;
                s.erase(i+1,1);
            }
        }
    }
    for(int i=0;i<=n;i++){
        if(max<a[i]) max=a[i];
    }
    cout<<max;
    return 0;
}
