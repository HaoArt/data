#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
	long long n,s,t,a;
	cin>>n;
	for(long long i=0;i<n;i++)
	{
		s=0;
		cin>>t;
		a=abs(t);
		while(a!=0)
		{
			if(a%2==0)
			s=s+a%10;
			a=a/10;
		}
		cout<<s<<endl;
	}
}
