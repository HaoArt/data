#include<bits/stdc++.h>
using namespace std;
typedef struct Runner{
	string name;//ko ki tu trang
	int bib;//1 den 5000
	int age; ///tuoi
	Runner *next;
}List;
List *MakeNode(string vname, int vbib, int vage)
{
	List *p=new List;
	p->name=vname;
	p->bib=vbib;
	p->age=vage;
	p->next=NULL;
	return p; 
}
void OrderIns(List *&head, string vname, int vbib, int vage)
{
	List *p=MakeNode(vname,vbib,vage);
	if(head==NULL)
	{
		head=p;
	}
	else 
		while(head==p)
		{
			if(p->bib>vbib)
			{
				p->next=head;
				head=p;
			}
		}
}
int PrtList(List*head)
{
	List *p=head;
	while(p!=NULL)
	{
		cout<<p->bib<<" ";
	}	
}
void Find(List *head, int vbib)
{
	List *p=head;
	if(p->bib=vbib)
	{
		cout<<vbib<<" "<<p->name<<" "<<p->age;
	}
}
int main (){
	List *head=NULL;
	string vname,s;
	int vbib,vage;
	while(cin>>s)
	{
		if(s=="ins")
		{
			cin>>vname;
			cin>>vbib;
			cin.ignore();
			cin>>vage;
			cin.ignore();
			OrderIns(head,vname,vbib,vage);
		}
		if(s=="prtlist")
		{
			PrtList(head);
		}
		if(s=="find")
		{
			cin>>vbib;
			cin.ignore();
			Find(head,vbib);
		}
		if(s=="end") break;
	}
}
