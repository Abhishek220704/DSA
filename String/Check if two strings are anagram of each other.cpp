#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool anagramcheck(count string &s, count string &t){
  if(s.length() != t.length()) return false;
  vector<int> count(26,0);
  for(size_t i=0; i< s.length(); i++){
    count[s[i] - 'a']++;
    count[t[i] - 'a']--;
  }
  for(int freq : count){
    if(freq != 0) return false;
  }
  return true;
}
int main(){
  string s,t;
  cin >> s >> t;
  if(anagramcheck(s,t)){
    cout << "True";
  }
  else{
    cout << "False";
  }
return 0;
}
  
