#include<iostream>
using namespace std;
int main (){
	float a,b,c;
	cin >> a>>b>>c;
	if (a==b&&a==c)
		cout<<"Tam giac deu";
	else
		if(a==b||a==c||c==b)
			cout <<"Tam giac can";
		else
		cout <<"Tam giac thuong";
	return 0;
}
