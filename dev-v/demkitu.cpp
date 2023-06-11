#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
char s[20],x[0];
int dem[26] = {};
int i,n;
puts("Nhap vao xau ki tu:");gets(s);
n=strlen(s);

int DemKyTuTrongChuoi(char *s, char ch)   // s là chu?i, ch là k? t?
int dem = 0;
for(int i =0; s[i]!=null; i++ )
if (s[i] == ch) dem ++;
return dem;
