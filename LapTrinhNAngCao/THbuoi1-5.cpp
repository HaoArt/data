#include <stdio.h>
#include <string.h>
int main() {
char str1[1000], str2[1000];
printf("Nhap chuoi (string) dau tien\n");
gets(str1);
printf("Nhap chuoi (string) thu hai\n");
gets(str2);
if (strcmp(str1,str2) == 0)
printf("Hai chuoi nhap vao bang nhau.\n");
else
printf("Hai chuoi nhap vao khac nhau.\n");
return 0;
}
