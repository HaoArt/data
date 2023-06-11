#include<stdio.h>
#include<string.h>
int main (){
	
	char s[20];
	int i,n;
	printf("Nhap xau ki tu: ");gets(s);
	n=strlen(s);
	for(i=0; i<n/2; i++)
	if(s[i]!=s[n-1-i])
	break;
	if(i==n/2)
	printf("xau doi xung");
	else
	printf("xau khon doi xung");
	return 0;
	
	
}
