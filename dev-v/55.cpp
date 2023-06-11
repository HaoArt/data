#include<bits/stdc++.h>
using namespace std;
long long daysolucas(long long n){
	if(n==0)
	{
		return 2;
	}
	else 
		if(n==1) 
		{
			return 1;
		}
		else{
		return daysolucas(n-1)+daysolucas(n-2);
		}
} 
void lksolucas(int n){
	for (int i=0; i<=n ; i++)
		{
			cout <<daysolucas(i)<<" ";
		}
}
int main (){
	long long n;
	cin>>n;
	lksolucas(n);
}
