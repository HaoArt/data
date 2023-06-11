o#include<iostream>
using namespace std;
void NhapMang(int *a, int n)
{
	for(int i =0; i < n; i ++)
	{
		cin>>a[i];
	}
}
void InMang(int *a , int n)
{
	for (int i =0; i < n ; i++) 
	{
		cout <<a[i]<<" ";
	}
	cout <<endl;
}
void XoaPT(int *&a, int &n, int VT)
{
	for (int i=VT; i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	int *b=new int [n-1];
	for (int i=0; i< n-1;i++)
	{
	b[i]=a[i];
	}
	delete[] a;
	a=b;
	n--;
}
int ThemPT(int x,int *&a, int &n,int Them )
{
	
}
int main (){
	int n; cin>>n;
	int *a=new int[n];
	NhapMang(a,n);
	InMang(a,n);
	int VT;
	cin>>VT;
	XoaPT(a,n,VT);
	InMang(a,n);
	delete[] a;
}
