#include<iostream>
#include <iomanip>
using namespace std;
void NhapMang(int a[],int n){
	
	for (int i=0; i< n ; i++)
		cin>> a[i];
}
float TBC(int a[],int n){
	int S=0;
	for (int i =0; i< n ; i ++)
		S+=a[i];
	return (float)S/n;
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	NhapMang(a,n);
		cout << setprecision(4) << fixed << TBC(a,n);
	return 0;
}
