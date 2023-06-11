#include<iostream>
using namespace std;
int main (){	
	int n,x,i,st=0,dem=0;
	cin >> n>> x;
	int a[n];
	for( i =1; i<= n ; i++)
		cin >> a[i];
	for( i=1; i <= n; i++)
		if (x>=a[n]){
		cout <<n;
		break;
		}
		else 
			if (x<=a[i])
			{
				cout << dem;
				break;
			}
			else
				dem++;
	return 0;
}
