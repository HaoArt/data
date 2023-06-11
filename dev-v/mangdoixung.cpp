#include<bits/stdc++.h>
using namespace std;
#include<string>
void mangdoixung(string &st){
	int i;
	for(i=0; i < st.length() ; i ++)
	{
		st[i]=tolower(st[i]);
	}
	if(isalpha(st[i])==st[i])
		for (i =0; i<st.length()/2; i ++)
		{
			if(st[i]!=st[st.length()-1-i])
			{
		break;
			}
	}
		if(i==st.length()/2){
		cout<<"Yes";
		}
		else{cout<<"No";
		} 
}

int main (){
	string st;
	while(getline(cin,st))
		mangdoixung(st);
}
