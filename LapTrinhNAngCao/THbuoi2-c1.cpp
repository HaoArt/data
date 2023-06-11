#include <iostream>
#include <string>
using namespace std;

string decToBase(int num, int base) {
  string result = "";
  const string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  while (num > 0) {
    result = digits[num % base] + result;
    num /= base;
  }

  return result;
}

int main() {
  int n;
  cin>>n;
  int b;
  cin>>b;
  string ans = decToBase(n, b);

  cout << ans << endl;

  return 0;
}
