#include <bits/stdc++.h>
using namespace std;
int dem(int n){
	int count=0;
	while(n!=0){
		n=n/10;
		count++;
	}
	return count;
}
int tong(int n){
	int count=dem(n);
	int sum=0;
	while(n!=0)
	{
		int x=n%10; 
		sum+=pow(x,count);
		n=n/10; 
		count--; 
	}
	return sum;
}
int kiemtra(int n){
	if(tong(n)==n)
	return 1;
	else 
	return 0;
}
int main(){
	int n;
	cin>>n;
	if(kiemtra(n))
	cout<<"YES";
	else
	cout<<"NO";
}
