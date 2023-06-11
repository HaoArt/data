#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main (){
	char s[20];
	char str[26];
	int dem[26] = {};
	int i,n;
	puts("Nhap vao xau ki tu: "); gets(s);
	puts("Nhap ki tu: "); gets(str);
	n=strlen(s);
	int sum=0;
	for(i=0; i<n; i++)
		if(isalpha(s[i]))
			dem[ tolower(s[i])-'a'];
	if(dem[i]==str[i])
		dem[i]++;
	printf("Ki tu %c xuat hien %d lan ",str,dem[i]);
	return 0;
}

// chua xong
