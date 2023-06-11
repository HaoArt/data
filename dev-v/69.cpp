#include<bits/stdc++.h>
#include<string>
using namespace std;
void kytu(string &str){
	int i,j,sum=0;
	for (i=0; i < str.length(); i ++)
	{
		str[i]=tolower(str[i]);
	}
	for (i=0; i < str.length(); i ++)
	{
		for (j=i; < i-1; j++)
		if (str[i]>='a'&&str[i]<='z')
		{
			if(int str[i]==str[i])
			{
				str.erase(i,1);
			}
			sum++;
		}
		
	}
				cout <<str<<endl; 
	cout <<sum;
} 
int main (){
	string str;
	getline(cin,str);
	kytu(str);
}
