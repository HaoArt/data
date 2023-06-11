#include<iostream>
#include<string>
using namespace std;
int main(){
	int demh=0,demt=0;
	string st;
	while(getline(cin,st)){
 		for(int i=0;i<st.length();i++)
		 	if(isupper(st[i]))
				demh++;
		for(int i=0;i<st.length();i++)
		 	if(islower(st[i]))
				demt++;		
		if(demh>demt){
			for(int i=0;i<st.length();i++)
				st[i]=toupper(st[i]);
			cout<<st<<endl;}	 
		else {
			for(int i=0;i<st.length();i++)
				st[i]=tolower(st[i]);
			cout<<st<<endl;						   
	}
}
}
