#include<iostream>
#include <iomanip>
using namespace std;

int main (){
	int n,i;
	cin >>n;
	double a[n];
	float sum=0;
	float avr;
	for( i= 0; i < n; i++)
		cin >> a[i];
	for (i =0; i < n ; i++)
		sum=sum+ a[i];
	avr= sum/(float)n;
	cout << setprecision(4) << fixed << avr;
	return 0;
 } 
