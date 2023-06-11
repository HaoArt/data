//2. Code minh hoa Con Tro TRo Den Cau Truc
#include<bits/stdc++.h>
using namespace std;
struct Date
{ 
	int ngay, thang, nam;
};
int main()
{
	Date *p;p=new Date;
	p->ngay = 10; p->thang = 5; p->nam = 2005;
	cout<<"Ngay:"<<p->ngay<<endl<<"Thang: "<<p->thang<<endl<<"Nam: "<<p->nam;
}
