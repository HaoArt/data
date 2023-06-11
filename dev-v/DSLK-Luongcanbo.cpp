#include<bits/stdc++.h>
using namespace std;
struct Person{
	string hoten;//ko ki tu trang
	long long ddong;//10 chu so
	double hsl; // hsl *1390000
	Person *next;
};
Person *MakeNode(string _hoten, long long _ddong , double _hsl)
{
	Person * p=new Person;
	p->hoten=_hoten;
	p->ddong=_ddong;
	p->hsl=_hsl;
	p->next=NULL;
	return p;
}
void InsertFirst(Person *&F,string _hoten, long long _ddong , double _hsl)
{
	Person *p=MakeNode(_hoten, _ddong , _hsl);
	if(F==NULL)
	{
		F=p;
	}
	else
	{
		p->next=F;
		F=p;
	}
}
void InsertLast(Person *&F,string _hoten, long long _ddong , double _hsl)
{
	Person *p=MakeNode(_hoten, _ddong , _hsl);
	if(F==NULL)
	   F=p;
	else
	{
		Person *q=F;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
	}
}
double SumSalary(Person *F)
{
	double s=0;
	Person *p=F;
	while(p!=NULL)
	{
		s+=p->hsl*1390000;
		p=p->next;
	}
	return s;
}
void ListPerson (Person *F, double _hsl)
{
	for(Person *p=F;p!=NULL;p=p->next){
        if(p->hsl == _hsl) cout<<p->hoten<<" ";
    }
}
int main (){
	Person *F = NULL;
string _hoten;
long long _ddong;
double _hsl;
	string s;
	while(cin>>s){
		if(s=="insF"){
			cin>>_hoten;
			cin>>_ddong;
			cin.ignore();
			cin>>_hsl;
			cin.ignore();
			InsertFirst(F,_hoten,_ddong,_hsl); 
		} 
		if(s=="insL")
		{
			cin>>_hoten;
			cin>>_ddong;
			cin.ignore();
			cin>>_hsl;
			cin.ignore();
			InsertFirst(F,_hoten,_ddong,_hsl); 
		}
		if(s=="sum"){
			cout<<setprecision(3)<<fixed<<SumSalary(F)<<endl; 
		}
		if(s=="list")
		{
			cin>>_hsl;
			cin.ignore();
			ListPerson(F,_hsl);
		}
		if(s=="fin"){
		break; 
		} 
	} 
}
