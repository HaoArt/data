#include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	while(getline(cin,a)){
	for(int i=0;i<a.length();i++){
		if(i==0 || a[i-1]==' '){
			a[i]=toupper(a[i]);
		}
		else{
			a[i+1]=tolower(a[i+1]);
		}
	}
	cout<<a<<endl;
}
}
