#include <bits/stdc++.h>
using namespace std;
struct List
{
	int data; 
	List *next;
};
List *MakeNode(int ele)
{
	List *p=new List;
	p->data=ele;
	p->next=NULL;
	return p;
}
void InsertLast(List *&head,int ele)
{
	List *p=MakeNode(ele);
	if(head==NULL)
	   head=p;
	else
	{
		List *q=head;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
	}
	 
}
int CountNode(List *head)
{
	List *p=head;
	int dem=0;
	while(p!=NULL)
	{
		dem++;
		p=p->next;
	
	}
	return dem;
}
void Delete(List *&head,int pos)
{
	int n=CountNode(head);
	if(head==NULL || pos<1 || pos>n) return;
	if(pos==1)
	{
		List *p=head;
		head=head->next;
		delete(p);
	}
	else 
	{
		List *p=NULL;
		List *q=head;
		for(int i=1;i<=pos-1;i++)
		{
			p=q;
			q=q->next;
		}
		p->next=q->next;
		delete(q);
	}
}
int Sum(List *head)
{
	int s=0;
	List *p=head;
	while(p!=NULL)
	{
		s=s+p->data;
		p=p->next;
	}
	return s;
}
int main()
{
	List *head=NULL;
	int n,ele;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>ele;
		cin.ignore();
		InsertLast(head,ele);
	}
	string st;
	while(true)
	{
		cin>>st;
		if(st=="i")
		{
			cin>>ele;
			cin.ignore();
			InsertLast(head,ele);
		}
	if(st=="s") cout<<Sum(head)<<endl;
	if(st=="d")
	{
		int pos;
		cin>>pos;
		cin.ignore();
		Delete(head,pos);
		
	}
	if(st=="0") break;	
		
	}
}
	
