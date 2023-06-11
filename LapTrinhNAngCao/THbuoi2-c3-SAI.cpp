#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef struct {
	char Ten[30];
	int NS; 
}SinhVien;
int main (){
	SinhVien DS[100], SV;
	int i,j,n;
	cout<<"Nhap so sinh vien : ";
	cin>>n;
	fflush(stdin);
	for(i=0; i< n; i++)
	{
		cout<<"Nhap du lieu cho Sinh Vien "<<i+1<<":"<<endl;
		cout<<endl<< "Ho ten :"; fgets(DS[i].Ten, sizeof(DS[i].Ten)+1, stdin);
		cout<<endl<<"Nam sinh : "; cin>>DS[i].NS;
	}
	cout <<endl<< "DANH SACH SINH VIEN "<<endl;
	for(i=0; i < n ; i ++)
	{
		if (DS[i].NS==2000)
		{
			cout<<DS[i].Ten<<endl;
		}
	}
	for(i=0; i < n-1; i ++)
		for(j =i+1; i < n ; j ++)
		{
			if (strcmp(DS[i].Ten,DS[j].Ten)>0)
			{
				SV=DS[i];
				DS[i]=DS[j];
				DS[j]=SV;
			}
		}
	cout<<endl <<"DANH SACH SINH VIEN DA SAP XEP "<<endl;
	for (i=0; i <n ; i++)
	{
		cout << DS[i].Ten;
	}
}
