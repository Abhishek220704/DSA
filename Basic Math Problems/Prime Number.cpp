#include<iostream>
using namespace std;
/*
void prime(int n){
    int cnt = 0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cnt ++;
        }
    }
    if(cnt==2){
        cout << "Number is Prime";
    }
    else {
        cout << "Not a prime number";
    }
}
int main(){
int n;
cin>>n;
prime(n);
}
*/

void prime(int n){
    int cnt = 0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt ++;
            if((n/i)!=i){
                cnt++;
            }
        }
    }
    if(cnt==2){
        cout << "Number is Prime";
    }
    else {
        cout << "Not a prime number";
    }
}
int main(){
int n;
cin>>n;
prime(n);
}
