#include <iostream>
#include <iomanip>
using namespace std;
typedef struct Node {
      int data;
      struct Node *next;
    
     }List;
List *createnode(int ele){
    List *newnode =new List;
    newnode->data=ele;
    newnode->next=NULL;
    return newnode;
}
int size(List *&head){
    int dem=0;
    List *temp=head;
    while(temp!=NULL){
        dem++;
        temp=temp->next;
    }
    return dem;
}
void insertfist(List *&head, int ele){
    if(head==NULL){
        head=createnode(ele);
    }else{
   List* newNode = createnode(ele);
   newNode->next = head;
   head = newNode;
    }
}
void InsertLast(List *& head,int ele){
    List *temp=head;
    List *newnode=createnode(ele);
    if(head==NULL){
        head=createnode(ele);
    }else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    
}
void InsertBeforePos(List *&head, int ele,int pos){
    if(pos<1){
        return;
    }
    if(pos>size(head)+1){
        InsertLast(head,ele);
    }
    else if(pos==1){
       
  insertfist(head,ele);
    }else{
        List *temp=head;
         List *newnode=createnode(ele);
        for(int i=1;i<=pos-2;i++){
            temp=temp->next;
        }
      
        
          newnode->next=temp->next;
          temp->next=newnode;
        
    }
}
void Delete(List *& head, int pos){
    
    if(pos<1||pos>size(head)){
        return;
    }
    if(pos==1){
         
        if(head==NULL){
            return;
        }
         List*temp=head;
        head=head->next;
        delete temp;
    }else{
        List*temp=head;
        for(int i=1;i<=pos-2;i++){
            temp=temp->next;
        }
        List *nodepos=temp->next;
        temp->next=nodepos->next;
        delete nodepos;
    }
}
float average(List *head){
    float tb=0;
    for(List*p=head;p!=NULL;p=p->next){
        tb=tb+(p->data);
    }
    return tb/size(head);
}
int main(){
    List *f=NULL;
    int n;
    cin>>n;
    int x;
   
    for(int i=0;i<n;i++){
        cin>>x;
        InsertLast(f,x);
    }
    char c;
    while(cin>>c){
       if(c=='i'){
           int h;
           int g;
           cin>>h;
           cin>>g;
          InsertBeforePos(f,h,g);
       }
       else if(c=='d'){
           int v;
           cin>>v;
           Delete(f,v);
       }
       
      else if(c=='a'){
            cout << setprecision(4) << fixed << average(f)<<endl;
        }
        else{
            break;
        }
    }
}
