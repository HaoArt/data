#include<iostream>
#include<cmath>
using namespace std;
int main (){
	signed int n; 
	int i,min=1e7,max=-1e7,c,b;
	cin >> n;
	int a[n];
	for (i=0; i<n ; i++)
		cin >> a[i];
	for (i=0; i< n; i++){
		if(a[i]<min){
			min=a[i];
			b=i; 
		}
		if(a[i]>max){
			max=a[i];
			c=i; 
		}
	}
	cout<<abs(b-c);
}
