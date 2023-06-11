#include<bits/stdc++.h>
using namespace std;
typedef struct node {
	int data;
	struct node *next;
} Node;
Node *MakeNode(int value){
	Node *p = new Node; 
	p->data = value;
	p->next = NULL;
	return p;
}

void addTail(Node *& head, int value){
	Node *p = MakeNode(value);
	Node *n = head;
	if(head == NULL)
		head = p;
	else{
		while(n->next != NULL){
			n = n->next;
		}
		n->next = p;	
	}
}  



void displayList(Node *& head){
	Node *p = head;
	while (p->next != NULL){
		cout << p->data << " -> ";
		p = p->next;
	};
	cout << p->data << endl;
}

int findFirst(Node *& head, int a){
    Node *p1, *p2;
    int kq = 0;
    for (p1=head; p1->next!=NULL; p1=p1->next){
        for (p2=p1->next; p2!=NULL; p2=p2->next)
            if ((p1->data)*a > (p2->data)*a)
                return kq;
    kq++;
    }
    return kq;
}

int findLast(Node *& head){
    Node *c = head, *p = NULL, *n = NULL;
    int sopt = 0;
    while (c!=NULL){
        n = c->next;
        c->next = p;
        p = c;
        c = n;
        sopt++;
    }
    int kq = sopt - 1 - findFirst(p,-1);
    return kq;
}



int main(){
    int N, x;
	Node *head = NULL;
    cin >> N;
    for (int i=0; i<N; i++)
    {
        cin >> x;
        addTail(head, x);

    }	
    int f = findFirst(head, 1), l = findLast(head);
    if (f < l)
        cout << f << " " << l;
    else
        cout << -1;
	
	return 0;
}
