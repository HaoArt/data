#include<stdio.h>

int main (){
	struct SinhVien{
		char Ten[20];
		struct Date{
			int day;
			int month;
			int year;
		} NS;
	} SV= {"Tran Anh",20,12,1990};
	printf("%s\n",SV.Ten);
	printf("%d\n",SV.NS.day);
	printf("%d\n",SV.NS.month); 
	printf("%d",SV.NS.year);  
	printf(" Sinh vien %s (%d/%d/%d)",SV.Ten,SV.NS.day,SV.NS.month,SV.NS.year);
	return 0;
}

