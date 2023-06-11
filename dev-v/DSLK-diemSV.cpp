#include <bits/stdc++.h>
using namespace std;
struct List{
	string name; //ten nguoi ko co ki tu trang
	int marks; // tu 0->9
	struct List *next;
};
void InsertFirst(List *&head,string vname, int vmarks)
{
	List *p=new List;
	p->name=vname;
	p->marks=vmarks;
	p->next=head;
	head= p;
	 
}
void DeleteFirst(List  *&head)
{
	if( head==NULL) return;
	List *p=head;
	head=head->next;
	delete(p);
	
}
int Count(List *head , int vmarks)
{
	int count=0;
	List *p=head;
	while(p!=NULL)
	{
		if(p->marks!=vmarks)
		{
		count++;
			
		}
		p=p->next;
	}
	return count;
}
int main()
{
	List *head = NULL;
string vname;
int vmarks;
	string s;
	while(true){
		cin>>s;
		if(s=="ins"){
			cin>>vname;
			cin>>vmarks;
			InsertFirst(head,vname,vmarks); 
		} 
		else if(s=="del")
		{
			DeleteFirst(head);
		}
		else if(s=="count"){
			int makrs;
			cin>>makrs;
			cout<<Count(head,makrs)<<endl; 
		}
		else if(s=="fin"){
		break; 
		} 
	} 
 } 
