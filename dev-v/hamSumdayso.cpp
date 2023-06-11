#include<iostream>
using namespace std;
//void dung khi ko co gia tri tra ve
//void NhapMang(int a[],int n){
//	for (int i=0; i<n; i++)
//		scanf("%d",a[i]);
//} 
//ham tinh tong
//int Tinh_tong(int a[],int n){
//		int sum=0;
//	for (int i =0; i < n; i++)
//		sum= sum+a[i];
//		return sum;
//}
void NhapMang(int a[],int n){
	for (int i=0; i<n; i++)
		cin>>a[i];
} 
//ham tinh tong
int Tinh_tong(int a[],int n){
		int sum=0;
	for (int i =0; i < n; i++)
		sum= sum+a[i];
		return sum;}
int main (){
	int n;
	cin>>n;
	int a[n];
	NhapMang(a,n);
cout<<Tinh_tong(a,n);
	return 0;
}
