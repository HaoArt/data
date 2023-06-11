#include<iostream>
using namespace std;

int main (){
int n,i;
cin >>n;
int a[n];
for ( i=0; i < n ; i ++)
	cin >> a[i];

if (n==1) cout <<"Yes";
else
{	bool kt=true;
	for (int i=0; i< n-1 ;i++)
	{
		if (a[i]>a[i+1])
		{
			kt=false;
			break;
		}
	}
	if(kt) cout << "Yes";
	else cout << "No";
 } 
}
