//5. Code minh hoa Tham So Cua Ham La Cau Truc
#include<bits/stdc++.h>
using namespace std;
struct sinhvien
{
	char hoten[30];
	float dtb;
};
void scanf_and_print_struct(sinhvien sv)
{
	cout<<"Nhap ho va ten: ";
	fflush(stdin);
	gets(sv.hoten);
	cout<<"Nhap diem trung binh: ";
	cin>>sv.dtb;
	cout<<"\n\nSau khi nhap!!!\n\n";
	cout<<"Ho ten: "<<sv.hoten<<endl;
	cout<<"Diem trung binh: "<<sv.dtb;
}
int main()
{
	sinhvien sv;
	scanf_and_print_struct(sv);
	return 0;
}
