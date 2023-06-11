#include<bits/stdc++.h>
using namespace std;
void  daucuatich(long long a,long long b){
	if(a<0 && b> 0)
		{
		cout<<"Zero";
		}
	else if(a>0 && b>0)
	{
		cout << "Positive";
	}
	else if((a-b)%2!=0)
		{	
		cout << "Positive";
		}
		else cout <<"Negative";
	}

int main (){
	long long  a,b;
	cin >> a>>b;
	daucuatich(a,b);
}
