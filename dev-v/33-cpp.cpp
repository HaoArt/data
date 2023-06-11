#include<bits/stdc++.h>
using namespace std;
int main (){
	float n,m,p;
	double time;
	cin>>n>>m>>p;
	time =log(p/n)/log((1+(m/100)));
	cout<<ceil(time);
}
