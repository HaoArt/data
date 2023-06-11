//3. Code minh hoa Mang COn Tro Tro Den Cau Truc
#include<bits/stdc++.h> 
using namespace std; 
struct Vat_tu 
{ 
	int manv; char tenvt[10]; float dongia; int soluong; 
};
int main() 
{
	Vat_tu *ptr[50];int i,n; 
	do 
	{ 
  		cout<<"\n Nhap so vat tu: "; cin >> n; 
  	}
	while (n>50); 
  	cout<<"\nNhap thong tin vat tu: "; 
  	for (int i=0;i<n;i++) 
  	{
		ptr[i] =new Vat_tu; 
  		cout<<"\n nhap ma vat tu: "; cin>>ptr[i]->manv; fflush (stdin); 
  		cout<<"\n nhap ten vat tu: "; gets (ptr[i]->tenvt); 
  		cout<<"\nNhap don gia : "; cin>>ptr[i]->dongia; 
  		cout<<"\nNhap so luong: "; cin>>ptr[i]->soluong; 
	} 
  	cout<<"\nChi tiet cac vat tu: "; 
  	for(int i=0;i<n;i++) 
  	{
		cout<<"\nMa vat tu: " <<ptr[i]->manv; 
		cout<<"\nTen vat tu: "<<ptr[i]->tenvt; 
		cout<<"\nDon gia: "<<ptr[i]->dongia; 
		cout<<"\nSo luong: "<<ptr[i]->soluong; 
	}
	return 0; 
} 

