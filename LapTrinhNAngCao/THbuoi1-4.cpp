#include<bits/stdc++.h>
#include<string>
using namespace std;
int  mang(string &st){
	int i,sum=0,max=-1e7;
	for(i=0;i<st.length();i++)
	{
		if (st[i]!=' ')
			sum++;
		else
		return sum=0;
		if(sum>max)
		{
			max=sum;
		}cout<<st[i];
		
	}cout<<"["<<max<<"]"<<" ";
//	for(i=0;i<st.length();i++)
//		if(max==st.length())
//	{
//		cout<<st[i]<<"["<<max<<"]"<<" ";
//	}
}
int main (){
	string st;
	getline(cin,st);
	mang(st);
}

