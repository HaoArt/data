#include<iostream>
#include<cmath>
using namespace std;
int main (){
	long long n,m; 
	int sum=0;
	cin >> n;
	while (n!=0){ 	
	m=n%10;
	if (m%2!=0){
		sum++; }
	n=n/10; 
	} 
	cout << sum;
} 
