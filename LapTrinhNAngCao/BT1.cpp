#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
	char s[20];
	int i,n;
	cout << "Nhap vao xau ki tu: "; gets(s);
	n=strlen(s);
	for (i=0; i<n/2; i++)
		if(s[i]!=s[n-1-i])
			break;
	if (i==n/2)
		cout<< "Xau doi xung";
	else
		cout<< "Xau khong doi xung";
	return 0;
}
