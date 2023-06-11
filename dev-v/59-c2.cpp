#include <iostream>
#include<>
using namespace std;
void NhapMang (int a[],int n){
	for (i =0; i< n ; i++)
		cin >> a[i]; 
}
 int main (){
 	int n;
 	cin >>n;
 	int a[n];
 	NhapMang(a,n);
 	sort(a,a+n,greeater<int>());
	sort(a,a+n,greeater<int>());
 	for (i=0, i<n ; i++)
 	cout <<a[i];
 	
 }
