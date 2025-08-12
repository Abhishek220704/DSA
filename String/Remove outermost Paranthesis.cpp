#include<iostream>
using namespace std;

string outermost(string s){
  int balance = 0;
  int n = s.size();
  for(int i=0;i<n;i++){
    if(s[i] == '(') balance++;
    if(s[i] == ')') balance--;

    if(balance == 0 && i != s.size() - 1) return s;
  }
  return s.substr(1,s.size() - 2);
}
int main(){
  string s = "(()())(())(()())";
  cout << outermost(s);
  return 0;
}
