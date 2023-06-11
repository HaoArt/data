#include<stdio.h>
#include<math.h>
int main ()
{
	int n,day,month,year;
	scanf("%d",&n);
	year=n/365;
	month=(n%365)/30;
	day=(n%365)%30;
	if(year>0)
	printf("%d years\n",year);
	if(month>0)
	printf("%d months\n",month);
	if(day>0)
	printf("%d days",day);
	return 0;
}
