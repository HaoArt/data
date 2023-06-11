#include<iostream>
using namespace std;
int main (){
	int i,n,m;
	cin >> n;
	int a[n];
	for (i=0; i< n ; i++)
		cin >> a[i];
	for (i=0; i< n; i++)
		if (a[i]>=5&&a[i]<=7)
			cout << a[i]<<" ";
}
