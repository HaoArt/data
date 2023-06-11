#include<stdio.h>
#include<stdio.h>
#include<string.h>
typedef struct 
{
    char TEN[30];
    int NS;
}SinhVien;
int main (){
SinhVien DS[100],SV;
int N, i ,j;
printf("Nhap so sinh vien : "); scanf("%d",&N);
fflush(stdin);
for (i=0; i<N ; i++)
{    fflush(stdin);
    printf("Nhap du lieu cho bang sinh vien %d:\n",i+1);
    printf("Ho ten : ");gets(DS[i].TEN);
    printf("Nam sinh : "); scanf("%d",&DS[i].NS);
}
printf("\n\n DANH SACH SINH VIEN \n\n");
for (i=0; i<N; i++)
    if (DS[i].NS==2000)
        printf("%s\n",DS[i].TEN);
    for (i=0; i<N-1 ; i++)
        for (j =i+1; j < N; j ++)
            if( strcmp(DS[i].TEN,DS[j].TEN)>0){
                SV=DS[i];
                DS[i]=DS[j];
                DS[j]=SV;
            }
printf("\n\n DANH SACH SINH VIEN DA SAP XEP \n\n");
for ( i=0; i < N ; i ++)
    printf("%s\n",DS[i].TEN);
return 0;
}

