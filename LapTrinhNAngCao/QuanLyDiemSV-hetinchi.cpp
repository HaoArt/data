#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
struct SV{
	float mon1,mon2,mon3,dtb;
	string diemchu;
};
void Nhapmang(SV a[],int n)
{
	for(int i=0; i < n; i++)
	{
		cin>>a[i].mon1>>a[i].mon2>>a[i].mon3;
	}
	for(int i=0; i <n; i++)
	{
		a[i].dtb=(a[i].mon1+a[i].mon2+a[i].mon3)/3;
	}
}
void DiemChu(SV a[],int n)
{
	for(int i=0; i < n ; i++)
	{
	if(a[i].dtb>=8.5) a[i].diemchu='A';
	else if(a[i].dtb>=7.0) a[i].diemchu='B';
		else if(a[i].dtb>=5.5) a[i].diemchu='C';
			else if(a[i].dtb>=4.0) a[i].diemchu='D';
				else a[i].diemchu='F';
	}

}
void Xapxep(SV a[],int n)
{
	float temp;
	for(int i=0; i< n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(a[i].dtb>a[j].dtb)
			{
				temp=a[i].dtb;
				a[i].dtb=a[j].dtb;
				a[j].dtb=temp;
			}
		}
	}
}
void xuat(SV a[],int n)
{
	for(int i=0; i < n; i ++)
	{
		cout<<setprecision(2)<<fixed<<a[i].dtb<<" "<< a[i].diemchu<<endl;
	}
}
int main (){
	int n;
	cin>>n;
	SV a[100];
	Nhapmang(a,n);
	Xapxep(a,n);
	DiemChu(a,n);	
	xuat(a,n);
}
