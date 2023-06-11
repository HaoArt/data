#include<bits/stdc++.h>
#include<string> 
using namespace std;
int main (){
 string str;
// xoa ki tu trong thu vien st

// str.erase(str.begin()+3);
//str.erase(str.end()-1);
//xoa y ki tu trong xau str tu vi tri x
//str.erase(2,3);
	while( getline(cin,str)){
 	while (str[0]==' ')
 	{
 	str.erase(0,1);	
	}
	while(str[str.length()-1]==' ')
	{
		str.erase(str.length()-1,1);
	}
	int i=0;
//	xoa ki tru space o giua
	while(str[i]!='\0')
	{
		if(str[i]==' '&& str[i+1]==' ')
		{
			str.erase(i,1);
		}
		else 
		{
			i++;
		}
	}
	cout<<str<<endl;
}
	
}
