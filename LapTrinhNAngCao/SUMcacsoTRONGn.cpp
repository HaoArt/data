#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,m;
	cin>>n;
	int s=0;
	while(n!=0)
	{
		m=n%10;
		s=s+m;
		n=n/10;
	}
	
	cout<<s;
}

