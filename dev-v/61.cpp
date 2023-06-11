#include<iostream>
#include<algorithm>
using namespace std;
void nhapmang(int a[],int n)
{
	for(int i=0;i<n;i++)
	cin>>a[i];
}
int main () {
	int n;
	cin>>n;
	int a[n];
	nhapmang(a,n);
	sort(a,a+n,less<int>());
	for (int i=0;i<n;i++){
	    if(abs(a[i])%2==0)
	        cout<<a[i]<<" ";
}
	for (int i=0;i<n;i++){
	    if(abs(a[i])%2==1)
	        cout<<a[i]<<" ";
}	
	return 0;
}
