#include<iostream>
using namespace std;

int main (){
	int n,m,sum=0,i,nut=0;
	cin >> n ;
	for (i=1 ; i <=n; i ++){
	m= n %10;
	n=n/10;
	sum+= m;
	}
	nut =sum%10;
	cout<<nut;
	return 0;
	
}
