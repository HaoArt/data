#include<iostream>
using namespace std;

int main (){
	int i,n,dem=0,st=0;
	cin >> n;
	if(n==1) cout << "Yes";
	else  
	int a[n];
	for (i=1; i < n; i++){
		cin >> a[i];}
	for (i =1; i< n ; i++)
		if(a[i]<dem){
			st=0;
			break;}
		else 
			st++;
			dem=a[i];
	if (st==0) cout << "No";
	else cout << "Yes";
	return 0; 
	
} 
