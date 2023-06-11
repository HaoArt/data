#include<stdio.h>
#include<conio.h>
typedef struct{
char ten[5];
int x,y;
}toado;
int main(){
toado t;
printf("Nhap thong tin toa do\n");
printf("Ten diem: ");gets(t.ten);
printf("Toa do x: ");scanf("%d",&t.x);
printf("Toa do y: ");scanf("%d",&t.y);
printf("Gia tri cac truong\n");
printf("%-5s%3d%3d\n"
,t.ten,t.x,t.y);
getch();
return 0;
}
