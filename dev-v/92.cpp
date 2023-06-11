#include<bits/stdc++.h>
using namespace std;
#include<string>
void mang (string &st){ 
	string st1="";
	for( int i=0; i < st.length(); i ++)
	{
		if(st[i]<='z'&&st[i]>='a'||st[i]<='Z'&&st[i]>='A')
			st1.push_back(tolower(st[i]));
	}
	int i=0;
	int j=st1.length()-1;
	while(st1[i]==st1[j]&&(i<=j))
	{
			i++;
			j--;
	}
	if(i<j)
	cout<<"No"<<endl;
	else cout<<"Yes"<<endl;

}
int main (){
	string st;
	while (getline(cin,st))
		mang(st);
}
