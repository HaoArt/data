#include<stdio.h>
int main()
{
	int n,i;
	long long S=1;
	scanf("%d",&n);
	if((n==0)||(n==1))
		printf("%lu",S);
	else{
		if(n%2>0&&n!=0&&n!=1)
			for(i=3;i<=n;i=i+2)
				S=S*i;
		if(n%2==0&&n!=0&&n!=1)
			for(i=2;i<=n;i=i+2)
				S=S*i;
		printf("%lu",S);}
	return 0;
	 
}
