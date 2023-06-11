#include <stdio.h>

int main() 
{
	int i,j,k;
	int T,n;
	scanf("%d",&T);
	for(i=1;i<=T;i++) {
	scanf("%d",&n);
	for(j=1;j<=n;j++){
	for(k=1;k<=j;k++){
	  	printf(" *");}
	  	printf("\n");}
	for(j=n-1;j>=1;j--){
	for(k=1;k<=j;k++){
		printf(" *");}
		printf("\n");
		}
		}
	return 0;
}
