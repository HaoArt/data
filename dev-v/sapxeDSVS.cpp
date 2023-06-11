#include<stdio.h>
#include<string.h>
// SAP XE THEO HO CUA SV
// SAP XEP THEO TEN CUA SV
int main (){
	int i, n;
	char DS[100][30],str[30];
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
	//SX THEO HO
//for (i=0; i<n; i++)
//	{
//		for (int j=i+1; i<n; i++)
//		{
//			if (strcmp( DS[i],DS[j] ) > 0)
//				strcpy(str,DS[i]);
//				strcpy(DS[i],DS[j]);
//				strcpy(DS[j],str);
//		}
//	}
	//SX THEO TEN
	char ten_i[30],ten_j[30];
	for(i=0; i< n-1;i++ )
		for (int j = i+1; j< n; j++)
		{
			strcpy(ten_i,strrchr(DS[i],32));
			strcpy(ten_j,strrchr(DS[j],32));
			if(strcmp(ten_i,ten_j) > 0){
			strcpy(str,DS[i]);
			strcpy(DS[i],DS[j]);
			strcpy(DS[j],str);
		}
	}
	for (i=0; i<n; i++)
	printf ("%s\n",DS[i]);
	return 0;
	
}
