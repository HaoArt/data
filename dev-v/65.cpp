#include <bits/stdc++.h> 
using namespace std;
int main(){ 
    string s;
    int a=0,i;
    while(getline(cin,s)){
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);}
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='i'||s[i]=='e'||s[i]=='u'){
                a++;
            }
        }
        cout<<a<<endl;
        a=0;
    }
        
  return 0; 
}
