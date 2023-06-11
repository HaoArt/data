#include<iostream>
#include<string>
using namespace std;

int main (){

	string st;
	while(getline(cin,st))
	{
		int j=0;
		string email="";
//		push_back : day vao cuoi xau 
		email.push_back(tolower(st[0]));
		for (int i=0; i < st.length(); i ++)
			if(st[i]==' ')
			{
				j=i+1;
				email.push_back(tolower(st[j]));
			}
//			substr : cat ki tu o sau vi tri j+1
			email+=st.substr(j+1,st.length()-j);
			email+="@huscmail.edu.vn";
		
		cout<<email<<endl;
		
	}
	
}
