#include<iostream>
using namespace std;

void armstrong(int n){
    int sum = 0;
    int original = n;
    while(n > 0){
        int lastdigit = n % 10;
        sum = sum + (lastdigit * lastdigit * lastdigit);
        n = n / 10;
    }
    if(original == sum){
        cout << "Number is an Armstrong number";
    }
    else{
        cout << "Not an Armstrong number";
    }
}

int main(){
    int n;
    cin >> n;
    armstrong(n);
}
