#include<stdio.h>

int main (){
	long long int n,m,dem=0,i=0;
	scanf("%lld",&n);
	if (n==0)
	dem =1;
	else{
	while(n>0)
	{
		m = n%10;
		if( m%2==0)
		dem ++;
		n=n/10;
	}
	}
	printf("%d",dem);
	return 0;
} 
