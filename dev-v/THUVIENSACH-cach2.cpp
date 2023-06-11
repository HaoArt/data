#include<iostream>
#include<string>
using namespace std;
typedef struct SV{
	char MaSV[10];
	char Ten[50];
	float DTB;
}SV;

void Nhap(SV A[], int &n)
{
	for(int i=0;i<n;i++)
	{
		gets(A[i].MaSV);
		cin.ignore();
		gets(A[i].Ten);
		cin.ignore();
		cin>>A[i].DTB;
		cin.ignore();
	}
}
void Xuat(SV A[], int n)
{
	int s=0;
	for(int i = 0; i < n; i ++)
	{	
		if(A[i].DTB > 6) //Ch? in SV sinh DTB>6
		{
			s++;
		}
	}
	cout<<s<<endl;
	for(int i = 0; i < n; i ++)
	{	
		if(A[i].DTB > 6) //Ch? in SV sinh DTB>6
		{
			cout<<A[i].MaSV<<" "<<cout<<A[i].Ten<<" "<<A[i].DTB<<endl;
		}
	}
}
int main()
{
	SV A[100];
	int n;
	cin>>n;
	cin.ignore();
	Nhap(A,n);
	Xuat(A,n);
	
}
