#include<bits/stdc++.h>
#include<string>
using namespace std;

string ten(string st){
	string p;
	int n=st.find_last_of(' ');
	p = st.substr(n+1);
	for(int i=0; i <p.length(); i++){
		p[i]=toupper(p[i]);
	}
	return p;
}
string ho(string st){
	string p;
	int n=st.find_last_of(' ');
	p=st.substr(0,n);
	for(int i=0; i < st.length(); i++)
	
		p[i]=tolower(p[i]);
	p[0]=toupper(p[0]);
	for (int i=0; i<p.length();i ++)
		if(p[i]==' ')
		{
			p[i+1]=toupper(p[i+1]);
		}
		
	return p;
}
int main (){
	string st;
	int k=0;
	string ds[100];
	while(true){
		getline(cin,st);
		if(st=="***") break;
		string p=ten(st)+" "+ho(st);
		ds[k]=p;
		k++;
	}
//	tang dan
//	sort(ds,ds+k);
//	giam dan
//sort(ds,ds+k,greater<string>());
//	tang dan
sort(ds,ds+k,less<string>());
	for (int i=0; i<k;i++){
		cout<<ds[i]<<endl;
	}
	
}
