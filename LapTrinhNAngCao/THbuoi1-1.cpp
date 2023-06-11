#include<iostream>
using namespace std;
#include<string>
int main (){
	int n,m,i,j;
	cin >> n;
	int a[n][n];
	for (i=0; i < n ; i++)
		for (j=0 ; j < n ; j++)
		cin >> a[i][j];
	for (i=0; i < n ; i++){
		for (j=0 ; j < n ; j++){
			if(a[i]>=a[j]){
			cout<< a[i][j]<<" ";
		}
		}
	cout<< endl;}
	cout << endl;
	for(i =0; i< n ; i++)
	{
		for(j=0; j < n;j ++)
		{
			if(a[i]<=a[j])
			{
			cout<< a[i][j]<<" ";
			}
			if(a[i]>a[j])
			{
			cout<<"  ";	
			}
		}
		cout<< endl;
	}
	
		
}
