
//1. Code minh hoa Cau Truc Bao Nhau
#include<bits/stdc++.h>
using namespace std;
struct Nguoi
{
	string hoten;
	int namsinh;
};
struct Sinhvien
{
	Nguoi info;
	float dtb;
};
int main()
{
	Sinhvien s1;
	cout<<"\nChi tiet cua sinh vien: \n";
	cout<<"\nNhap ho ten: ";
	getline(cin,s1.info.hoten);
	//cin.ignore(1);
	cout<<"\nNhap nam sinh: ";
	cin>>s1.info.namsinh;
	cout<<"\nNhap diem trung binh: ";
	cin>>s1.dtb;
	cout<<"\n*******************************\n\n";
	cout<<"\nHo ten: "<<s1.info.hoten;
	cout<<"\nNam sinh: "<<s1.info.namsinh;
	cout<<"\nDiem trung binh: "<<s1.dtb;
	return 0;
}







