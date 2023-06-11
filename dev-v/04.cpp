#include<stdio.h>

int main()
{
	long A,B,tich;
	scanf("%d%d",&A,&B);
	tich=A*B;
	if(tich%2>0)
		printf("Odd");
	else
		printf("Even");
	return 0;
}
