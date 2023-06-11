#include<iostream>
using namespace std;
int main (){
	int i,n,min=1e7,max=-1e7,S;
	cin >> n;
	int a[n];
	for (i=0; i< n ; i++)
		cin >> a[i];
	for (i=0; i< n; i++)
		if (a[i]<min)
			min =a[i];
	for (i=0; i< n; i++)
		if(a[i]>max)
			max=a[i];
	S=max-min;
	cout << S;
			
			
		
}
