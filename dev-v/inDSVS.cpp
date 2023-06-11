#include<stdio.h>

int main (){
	int i, n;
	char DS[100][30];
	printf ("Nhap DSSV (<100), go to Enter de thoat.. \n");
	n=0;
	do {
		printf("ten sinh vien [%d]",n+1);
		gets(DS[n]);
		if(DS[n][0]!='\x0') n++;
		else break;
		if (n==100) break;
	}while(1);
	printf("\n\nDS sinh vien vua nhap \n");
	for (i=0; i<n; i++)
	printf ("%s\n",DS[i]);
	return 0;
	
}
