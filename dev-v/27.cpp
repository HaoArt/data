#include<bits/stdc++.h>
#include<string>
using namespace std;
void bar(string st[],int n){
	int T=0,N=0,i,j;

	for(int i=0; i<n;i++){
		if(st[i]=='ABSINTH' || st[i]=='BEER'  ||st[i]=='BRANDY'||st[i]== 'CHAM-PAGNE'||st[i]=='GIN'||st[i]== 'RUM'||st[i]== 'SAKE'||st[i]== 'TEQUILA'||st[i]== 'VODKA'||st[i]== 'WHISKEY'||st[i]== 'WINE'){
			N++;
		}
	else{
	if(st[i]<=18 && st[i]!=16)
		T++;
}
}
	cout<<T+N;
}
int main (){
	string st;
	int n;
	getline(cin,st[i]);
	bar(st,n);
}
