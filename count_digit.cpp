#include<iostream>
using namespace std;

int count(int n){
    int cnt = 0;
    while(n>0){
        int lastdigit = n % 10;
        cnt = cnt + 1;
        n = n/10;
    }
    cout << cnt;
}
int main(){
int n;
cin >> n;
count(n);
}
