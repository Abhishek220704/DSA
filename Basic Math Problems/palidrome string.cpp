#include <iostream>
#include<string>

using namespace std;

bool ispalidrome(string s){
    int left = 0;
    int right = s.length() - 1;
    while(s[left]<s[right]){
        if(left != right){
            cout << "no";
            return false;
        }
        left ++;
        right ++;
    }
    cout << "yes";
    return true;
}
int main(){
    string s;
    cin >> s;
    ispalidrome(s);
    return 0 ;
}
