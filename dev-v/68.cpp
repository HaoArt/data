#include <iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int k=1,dem[26]={0};
    for(int i=0;i<s.length();i++)
            dem[int(s[i])-97]++;
    for(int i=0;i<26;i++)
        if(dem[i]==0){
            cout<<char(i+97);
            k=0;
            break;
        }
    if(k==1) cout<<"None";
    return 0;
}
