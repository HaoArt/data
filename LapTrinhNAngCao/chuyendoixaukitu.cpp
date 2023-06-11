#include<stdio.h>
#include<ctype.h>
#include<string.h>
main(){
	char s[20];
	int dem[26] = {};
	int i,n;
	puts("Nhap vao xau ki tu:");gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
		if(isalpha(s[i]))
			s[i]= toupper(s[i]);
		printf("%s\n",s);
	for(i=0;i<n;i++)
		if(isalpha(s[i]))
			s[i]= tolower(s[i]);
		printf("%s\n",s);	
	for(i=0;i<n;i++)
		if(s[0]!='\0')
			s[i]=toupper(s[i]);
		if( isspace(s[i-1] ) && (! isspace(s[i])) )
			s[i]=tolower(s[i]);

		printf("%s",s);
		return 0;
}
