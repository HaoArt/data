#include<stdio.h>
#include<conio.h>
#include<string.h	> 
typedef struct{
char hoten[20];
int diem;
}sinhvien;
int main(){
sinhvien a,b,c;
printf("Nhap thong tin sinh vien\n");
printf("Ho ten: "); gets(a.hoten);
printf("Diem:"); scanf("%d",&a.diem);
b = a;
strcpy(c.hoten,a.hoten);
c.diem = a.diem;
printf("Bien a: ");
printf("%-20s%3d\n",a.hoten,a.diem);
printf("Bien b: ");
printf("%-20s%3d\n",b.hoten,b.diem);
printf("Bien c: ");
printf("%-20s%3d\n",c.hoten,c.diem);
getch();
}
