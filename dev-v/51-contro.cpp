#include <iostream>
using namespace std;
void NhapMang(long *a, int n)
{
	for (int i=0; i<n;i++)
		cin>> a[i];
}
int Max(long *a, int n)
{
	int max=-1e7;
	for (int i=0; i<n;i++)
		if(max < a[i])
		max=a[i];
	return max;
}
int Min(long *a, int n)
{
	int min =1e7;
	for (int i=0; i<n;i++)
		if(min > a[i])
		min=a[i]; 
	return min;
}
int main(){
	int n;
	cin >> n;
	long *a= new long[n];
	NhapMang(a,n);
	cout << Max(a,n) - Min(a,n);
	return 0;
}

