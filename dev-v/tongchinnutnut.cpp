#include<iostream>
using namespace std;

int main (){
	unsigned int n,j,sum,i,nut=0;
	cin >> n ;
	for (i=1 ; i <=n ; i ++){
		j=i;
		sum=0;
		while(j!=0)
			{
			sum=sum+j%10;
			j=j/10;
			}
	if(sum%10==9)
		nut++;
}
	cout<<nut;
	return 0;
	
}//tu 1 den 20 co 2 so tong bang 9 la : 9, 18
