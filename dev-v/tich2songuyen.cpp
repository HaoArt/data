#include<stdio.h>

int main (){
	int x,y,tich;
	scanf("%d%d",&x,&y);
	tich= x*y;
	if (tich %2 == 0)
		printf("Even");
	else 
		printf ("Old");
	return 0; 
	
}
