#include<bits/stdc++.h>
using namespace std;
long long  n,dem,s;
bool snt(int n){
	for(int i=2;i*i<=n;i++)
	{
	if(n%i==0) 
	return 0; 
	} 
    return 1; 
} 
long long uocso(int a,int b){
	long long dem=0;
	for(int i=b;i<=a;i*=b){
	dem+=a/i; 
	} 
	return dem; 
} 
long long kt(int n){
	long long S=1; 
	for(int i=2;i<=n;i++){
		if(snt(i)==true){
			S=S*(uocso(n,i)+1)%(1000000007); 
			}	
		} 
	return S; 
	
} 
int main()
{
	int n; 
	cin >> n;
	long long S=kt(n);
	cout<< S; 
}
