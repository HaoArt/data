#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int i;
	for(i=0;i <s.length(); i++)
	{
		if(isdigit(s[i]))
		{
			cout<<s[i];
		}
		
	}cout<<" ";
	
}
