#include <bits/stdc++.h>

using namespace std;

void quanbar(string s[], int n){
    int dem = 0;
    for(int i = 0; i < n; i++){
        cin >> s[i];
        if(s[i]=="ABSINTH"   || 
           s[i]=="BEER"      ||
           s[i]=="BRANDY"    ||
           s[i]=="CHAMPAGNE" || 
           s[i]=="GIN"       ||
           s[i]=="RUM"       ||
           s[i]=="SAKE"      ||
           s[i]=="TEQUILA"   || 
           s[i]=="VODKA"     ||
           s[i]=="WHISKEY"   ||
           s[i]=="WINE"){
                    dem++;  
           }
           if(s[i].length() < 2){
                    dem++;
           }
           if(s[i].length() == 2){
               if(s[i] < "18" && s[i] != "16"){
                   dem++;
               }
           }
    }
           cout << dem;
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    string s[n];
    quanbar(s, n);
}
