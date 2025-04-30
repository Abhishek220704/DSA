
#include<iostream>
using namespace std;
/*
void GCD(int n1,int n2){
    int gcd = 1;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd = i;
        }
    }
    cout << gcd;
}
int main(){
int n1;
int n2;
cin >> n1 >> n2;
GCD(n1,n2);
}
*/
void GCD(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a = a % b;
        }
        else{
            b = b % a;
        }
        if(a==0){
            cout << b;
        }
        else{
            cout << a;
        }
    }
}
int main(){
int a;
int b;
cin >> a >> b;
GCD(a,b);
}
