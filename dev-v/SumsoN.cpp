#include<iostream>
using namespace std;
int main (){
	int n,i,sum=0;
	cin >> n;
	for (int i=0; i<n ; i++) 
		{
		sum+=n%10;;
		n=n/10;}
cout <<sum;
return 0; 
}
