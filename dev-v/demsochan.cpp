#include<stdio.h>

int main (){
	long long int n,m,dem=0,i=0;
	scanf("%lld",&n);
	while(n>0)
	{
		m = n%10;
		n=n/10;
		i++;
		if( m%2==0)
		dem ++;
	}
	printf("%d",dem);
	return 0;
	
} 
