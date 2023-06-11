#include<stdio.h>
#include<math.h>
int main (){
	int i,n,sum=0;
	scanf("%d",&n);
	int a[n];
	NhapMang(a,n);
	printf("%d",Tinh_tong(a,n));
	for (i=0; i <n;i++)
		scanf("%d",&a[i]);
	for (i =0;i <n;i++)
		sum= sum+a[i];
	
	printf("%d",sum);
return 0;
}
