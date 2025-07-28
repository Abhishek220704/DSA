#include<iostream>
#include<string>
using namespace std;

string largestnum(string s){
  for(int i = s.length()-1; i>=0; i--){
    if((s[i] - '0') % 2 == 1){
      return s.substr(0, i+1);
    }
  }
  return " ";
}
int main(){
  string s;
  cin >> s;
  cout << largestnum(s);
  return 0;
}
