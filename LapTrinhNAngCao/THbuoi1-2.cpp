#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,m,i,j;
	cin>>n>>m;
	int a[n][m];
	for(int i=0; i< n;i ++)
		for (int j =0; j < m; j++)
		{
			cin>> a[i][j];
		}
	int sum =0,maxc=-1e7,maxh=-1e7;
	for(int i=0; i< n;i ++){
		sum=0;
		for (int j =0; j < m; j++)
		{
			sum+=a[i][j]; 
			if(sum>maxh)
				maxh=sum;
		}
	}
	cout<<maxh<<endl;
	for(int i=0; i< m;i ++){
		sum=0;
		for (int j =0; j < n; j++)
		{
			sum+=a[j][i]; 
			if(sum>maxc)
				maxc=sum;
		}
	}
	cout<<maxc<<endl;
	int max=-1e7,min=1e7;
	for(int i=0; i< n;i ++){
		for (int j =0; j < m; j++)
		{
			if(a[i][j]>max) max=a[i][j];
			if(a[i][j]<min) min=a[i][j];
		}
	}
	for(int i=0; i< n;i ++){
		for (int j =0; j < m; j++){
			if(a[i][j]==max)
			{
				cout<<"Tai vi tri "<<i<<" "<<j<<" max la :"<<max<<endl;
			}
			if(a[i][j]==min)
			{
				cout<<"Tai vi tri "<<i<<" "<<j<<" min la :"<<min<<endl;
			}
		}
	}

}
