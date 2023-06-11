#include <iostream>
using namespace std;
int main (){
	int i,n,j,max =-1e7;
	cin >>n;
	int a[n];
	for (i=0; i<n ; i++)
		cin >> a[i];
	int tg;
	for (i= 0; i < n-1 ;i ++)
	{
		for (j=i +1 ; j<n;j++)
		{
			if(a[i]<a[j])
			{
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
	for (i =0; i< n*10/100; i++)
	cout << a[i] <<" ";
}
