#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
char non(string s){
    unordered_map<char,int> freq;
    for(char ch : s){
        freq[ch]++;
    }
    for(char ch : s){
        if(freq[ch] == 1){
            return ch;
        }
    }
    return -1;
}
int main(){
    string s;
    cin >> s;
    char ans = non(s);
    if(ans != 1){
        cout << ans;
    }
    else{
        cout << "not found";
    }
    return 0;
}
