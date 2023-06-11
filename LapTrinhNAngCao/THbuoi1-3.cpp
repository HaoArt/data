#include<bits/stdc++.h>
using namespace std;
#include<string>
void mang(string &st){
	int i;
	char s;
	for(i =0 ; i < st.length()/2; i++)
	{
		if(isalpha(st[i])!=isalpha(st[st.length()-1-i])){
			break;
		}}
		if(isalpha(i)==isalpha(st.length()/2))
		{
			cout<<"Chuoi doi xung"<<endl;
		}
		else cout << "Chuoi khong doi xung"<<endl;
	
	cin>>s;
	for(i=0;i<st.length();i++)
	{	 
		if(st[i]==tolower(s) || st[i]==toupper(s))
		{
			st.erase(i,1);
		}
	}
	cout<<st;
}
int main (){
	string st;
	getline(cin,st);
	mang(st);
}
