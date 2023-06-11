#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int dem[26]={0},t=0;
	for(int i=0;i<s.length();i++){
		if(s[i]>='a'&&s[i]<='z')
		  dem[s[i]-97]++;
	}
	for(int i=0;i<26;i++){
		if(dem[i]>1){
		    t=0;
		    break;
		}
        else t++;
	}
	if(t==0) cout<<"No";
	else cout<<"Yes";
    return 0;
}
