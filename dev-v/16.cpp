#include<bist/stdc++.h>
using namespace std;
int main(){
	int n,i,j=0;
	cin>>n;
	int a[n];
	for (i=0;i<n ; i++)
		cin >> a[i];
	for (i=0; i<n; i++)
		if (a[i]%19==0||a[i]%19==3||a[i]%19==6||a[i]%19==9||a[i]%19==11||a[i]%19==14||a[i]%19==17)
		j++;
	cout <<j;
}
