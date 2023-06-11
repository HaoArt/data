#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main (){
char s[20];
int dem[26] ={};
int i,n;
puts("nhap vao xau ki tu  :"); gets(s);
n=strlen(s);
for ( i = 0; i <n; i++)
    if(isalpha(s[i]));
        dem[tolower(s[i])-'a']++;
for (i=0; i<26; i++)
    if (dem[i]!=0)
    printf("ki tu %c xuat hien %d lan \n",'a'+i,dem[i]);

}
