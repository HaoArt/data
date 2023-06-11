#include<iostream>
using namespace std;
int main (){	
	int n,x,i,st=0,dem=0;
	cin >> n>> x;
	int a[n];
	for( i =0; i< n ; i++)
		cin >> a[i];
		while(a[i]<x){
		
		dem++;
		}
		cout << dem;
return 0;
}
