#include<stdio.h>
#include<string.h>
// co dung ham 
main(){
char s[100],c;
int i, n;
printf("Nhap xau: "); gets(s);
n =strlen(s);
for(i=0;i <n/2;i++){
c = s[i];
s[i] = s[n-i-1];
s[n-i-1]=c;
}
printf("%s",s);
}
