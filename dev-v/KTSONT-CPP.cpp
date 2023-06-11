#include <iostream> 
#include<cmath>
using namespace std;
int kt_SNT(int k){
	int i;
	for (i =2; i <= sqrt(k); i++)
	if (k%i==0)
		return 0;
	return 1;
}
int main(){
	int i,n;
	cin>>n;
	for (i=2; i<= n; i++)
		if (kt_SNT(i)==1)
		cout<<i <<" ";
		return 0;
}
