#include <bits/stdc++.h>

using namespace std;
typedef  struct  Node{
string  hoten;
long  long  ddong;
double  hsl;
struct  Node * next;
} Person;
void InsertFirst(string _hoten , long long _ddong , double _hsl , Person *&F){
    Person *p = new Person;
    p->hoten = _hoten;
    p->ddong = _ddong;
    p->hsl = _hsl;
    p->next = F;
    F = p;
}
void InsertLast(string _hoten , long long _ddong , double _hsl , Person *&F){
    Person *p = new Person;
    p->hoten = _hoten;
    p->ddong = _ddong;
    p->hsl = _hsl;
    p->next = NULL;
    if(F == NULL){
        F = p;
        return;
    }
    Person *q = F;
    while(q->next != NULL) q = q->next;
    q->next = p;
}
double SumSalary(Person *F){
    double sum=0;
    for(Person *p=F;p!=NULL;p=p->next){
        sum += (p->hsl)*1390000;
    }
    return sum;
}
void ListPerson(Person * F, double _hsl){
    for(Person *p=F;p!=NULL;p=p->next){
        if(p->hsl == _hsl) cout<<p->hoten<<" ";
    }
}
int main()
{
    Person *F=NULL;
    string cmd;
    while(cin>>cmd){ 
        if(cmd == "insF"){
            string hoten; long long didong; double hsl; cin>>hoten>>didong>>hsl;
            InsertFirst(hoten,didong,hsl,F);
        }else if(cmd == "insL"){
            string hoten; long long didong; double hsl; cin>>hoten>>didong>>hsl;
            InsertLast(hoten,didong,hsl,F);
        }else if(cmd == "sum"){
            cout<<fixed<<setprecision(3)<<SumSalary(F)<<endl;
        }else if(cmd == "list"){
            double hsl; cin>>hsl;
            ListPerson(F,hsl);
            cout<<endl;
        }else if(cmd == "fin"){
            break; 
        }
    }
    return 0;
}
