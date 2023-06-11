#include<stdio.h>
#include<math.h>
int kt_SNT(int k){
int i;
// hàm ki?m tra s? nguyên t?
// SNT là s? chir có 2 ý?c 1 là chính nó Th? 2 là 1 
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
