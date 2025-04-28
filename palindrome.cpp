#include<iostream>
using namespace std;

void palindrome(int n) {
    int revno = 0;
    int original = n;
    while(n > 0){
        int lastdigit = n % 10;
        n = n / 10;
        revno = (revno * 10) + lastdigit;
    }
    if(original == revno){
        cout << "Number is palindrome";
    }
    else {
        cout << "Not a palindrome";
    }
}

int main(){
    int n;
    cin >> n;
    palindrome(n);
}
