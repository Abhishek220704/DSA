#include<iostream>
using namespace std;

int revno(int n){
    int rever = 0;
    while(n>0){
        int lastdigit = n % 10;
        n = n/10;
        rever = (rever*10) + lastdigit;
    }
    cout << rever;
}
int main(){
int n;
cin >> n;
revno(n);
}

