#include<iostream>
using namespace std;
int main (){
	int n,i;
	cin >> n;
	int a[n];
	for (i =0; i< n ;i++)
		cin >> a[i];
	for (i =0; i < n ; i ++)
	{
		if ((a[i]%4==0)&&(a[i]%100!=0)||(a[i]%400==0))
		{
			cout <<"leap year"<<endl;
				}
		else 
		{
		cout << "none"<<endl;
		}
	}
} 
