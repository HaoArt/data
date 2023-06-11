#include<stdio.h>

int main (){
	int x1,y1;
	scanf("%d%d",&x1,&y1);
	if(x1>0&&y1>0)
		printf("The coordinate point (%d, %d) lies in the I quandrant.",x1,y1);
	else
		if (x1>0&&y1<0)
			printf("The coordinate point (%d, %d) lies in the IV quandrant.",x1,y1);
		else
			if (x1<0&&y1<0)
			printf("The coordinate point (%d, %d) lies in the III quandrant.",x1,y1);
			else
				if(x1<0&&y1>0)
				printf("The coordinate point (%d, %d) lies in the II quandrant.",x1,y1);
				else 
				printf("The coordinate point (%d, %d) lies at the origin.",x1,y1);
return 0;
	
}
