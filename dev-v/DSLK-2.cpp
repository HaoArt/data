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
void InsertFirst(List *&head , int  ele)
{
	List *p=MakeNode(ele);
	if(head==NULL)
	{
		head=p;
	}
	else
	{
		p->next=head;
		head=p;
	}
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
	int dem=0;
	List *p=head;
	while (p!=NULL)
	{
		dem++;
		p=p->next;
	}
	return dem;
}

void InsertBeforePos(List *&head,int ele,int Pos)
{
	int n=CountNode(head);
	if(ele==1)
	{
		InsertFirst(head,ele);
		return;
	}
	if(ele<1||ele>n)
	{
		InsertLast(head,ele);
	}
	else
	{
		List *p=MakeNode(ele);
		List *q=head;
		for (int i =1; i <=Pos-2; i++)
		{
			q=q->next;
		}
		p->next=q->next;
		q->next=p;
	}
}
void Delete(List *&head,int Pos)
{
	int n=CountNode(head);
	if(head==NULL || Pos<1 || Pos>n) return;
	if(Pos==1)
	{
		List *p=head;
		head=head->next;
		delete(p);
	}
	else 
	{
		List *p=head;
		List *q=head;
		for(int i=1;i<=Pos-2;i++)
		{
			p=q;
			q=q->next;
		}
		p->next=q->next;
		delete(q);
	}
}
float Average(List *head)
{
	int n=0;
	float s=0,Avr;
	List *p=head;
	while(p!=NULL)
	{
		s=s+p->data;
		p=p->next;
		n++; 
	}
	return Avr=s/n;
}
int main()
{
	List *head=NULL;
	int n,ele,Pos;
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
			cin>>Pos;
			cin.ignore();
			InsertBeforePos(head,ele,Pos);
		}
	if(st=="a") cout<<setprecision(4) << fixed << Average(head)<<endl;
	if(st=="d")
	{
		cin>>Pos;
		cin.ignore();
		Delete(head,Pos);
		
	}
	if(st=="0") break;	
		
	}
}
