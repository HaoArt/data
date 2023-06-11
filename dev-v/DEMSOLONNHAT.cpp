#include <iostream> 
using namespace std;
 int main (){
 	int n,i,j,max= 0;
 		cin >> n;
 	int a[n];
 	for (i =0 ; i < n ; i++)
 		cin >> a[i];
 	max =-1e7;
 	for(i=0; i < n; i++)
 		if (max < a[i])
 			max= a[i];
 	int dem=0;
 	for (j=0; j < n; j++ )
 		if (a[j]==max)
 		dem++;
 		cout << max <<" "<< dem;
	return 0;
 } 
