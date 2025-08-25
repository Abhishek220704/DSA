#include<iostream>
#include<string>
using namespace std;

bool rotatestring(const string &s, const string &goal){
  if(s.length() != goal.length()) return false;
  string doubled = s + s;
  return doubled.find(goal) != string::npos;
}

int main(){
  string s,goal;
  cin >> s;
  cin >> goal;
  if(rotatestring(s,goal)){
    cout << "True";
  }
  else{
    cout << "False";
  }
return 0;
}
