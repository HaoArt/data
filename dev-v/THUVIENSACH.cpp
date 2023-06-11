#include<bits/stdc++.h>
using namespace std;
struct List{
	string MaSach;
	string TenSach;
	string TacGia;
	int SoLuong;
};

void xuat(List *Sach,int n)
{
	for (int i=0; i < n ; i++)
	{
		cout<<Sach[i].MaSach<<endl<<Sach[i].TenSach<<endl<<Sach[i].TacGia<<endl<<Sach[i].SoLuong<<endl;
	}
}
void xoakitutrang(List Sach[],int n)
{
	while (Sach[0]==' ')
 	{
 	Sach.erase(0,1);	
	}
	while(Sach[Sach.length()-1]==' ')
	{
		Sach.erase(Sach.length()-1,1);
	}
	int i=0;
//	xoa ki tru space o giua
	while(Sach[i]!='\0')
	{
		if(Sach[i]==' '&& Sach[i+1]==' ')
		{
			Sach.erase(i,1);
		}
		else 
		{
			i++;
		}
	}
}

int main (){
	int n;
	cout << " nhap danh sach sinh vien "<<endl;
	cin >> n;
	if(n>50) return;
	List* Sach = new List[n];
    for(int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, Sach[i].MaSach);
        getline(cin, Sach[i].TenSach);
        getline(cin, Sach[i].TacGia);
        cin >> Sach[i].SoLuong;
    }
	xuat(Sach,n);
}
