#include<stdio.h>
#include<math.h>
int kt_SNT(int k){
int i;
// h�m ki?m tra s? nguy�n t?
// SNT l� s? chir c� 2 �?c 1 l� ch�nh n� Th? 2 l� 1 
for (i=2; i<=sqrt(k); i++)
	if (k%i==0)
		return 0;
	return 1;
}
int main(){
int i,a;
scanf ("%d",&a);
for (i=2; i<=a ;i++)
	if (kt_SNT(i)==1)
	printf("%d ",i);	
	return 0;

}
