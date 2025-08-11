string palidrome(string s){
  int left = 0;
  int right = s.size()-1;
  while(left<right){
    if(left != right) return false;
      left ++;
      right --;
    }
  
    return true;
}
int main(){
  cin >> s;
  palidrome(s);
  return false;
}
