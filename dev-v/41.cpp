#include <iostream> 
using namespace std;
int main() { 
    int n ;
    cin>>n;
    long long a = 2, b = 1, c, i;
    int m[n];
    for(int j=0;j<n;j++)
        cin>>m[j];
    for(int j=0;j<n;j++){
        a=2;b=1;
        for (i=0;i<m[j]+1; i++){
            if (i == 0) 
                c=2;
                else if (i==1) 
                    c=1;
                    else{
                    c = a + b; 
                    a = b;
                    b = c; 
            }
        }
        cout<<c<<endl;
    }   
  return 0; 
}
