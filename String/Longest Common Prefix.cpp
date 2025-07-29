#include <iostream>
#include<string>
#inlude<vector>

string prefix(vector<string> s){
  if(s.empty()) return "";
  string prefix = "";
  for(int i=0; i<s[0].size();i++){
    char c = s[0][i];
    for(int j=0;j<s.size();j++){
      if(i >= s[j].size() || s[j][i] != s){
        return prefix;
      }
    }
    prefix += c;
  }
  return prefix;
}
int main(){
vector<string> s;
cin >> string;
cout << prefix(s);
