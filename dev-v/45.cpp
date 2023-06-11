#include <stdio.h>
#include<math.h> 
//ham kt so cp 
int KT(int k)
{
	int i;
	for(i=2;i<=sqrt(k);i++)
	if(k==i*i)
		return 1;
	return 0;
}
int main() {
	int n,i,min=1e7;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		if(KT(a[i])==1)
			if(min>a[i])
			min=a[i];
			printf("%d",min);
	return 0;
}
