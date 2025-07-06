#include<iostream>
using namespace std;

/*
1)
OUTPUT
****
****
****
****
code:
int main(){
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout << "*";
    }
    cout << endl;
}
return 0;
}

2)
OUTPUT
*
**
***
****
*****

CODE:
void triangle(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    triangle(n);
}

3)
OUTPUT
1
12
123
1234

CODE :
void number(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
    cout << endl;
    }
}
int main(){
int n;
cin >> n;
number(n);
}

4)
OUTPUT :
1
22
333
4444

CODE :
void same(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout << i;
        }
    cout << endl;
    }
}
int main(){
int n;
cin >> n;
same(n);
}

5)
OUTPUT :
*****
****
***
**
*

CODE :

void trian(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout << "*";
        }
    cout << endl;
    }
}
int main(){
int n;
cin >> n;
trian(n);
}

6)
OUTPUT :
12345
1234
123
12
1

code:

void san(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout << j;
        }
    cout << endl;
    }
}
int main(){
int n;
cin >> n;
san(n);
}

7)
OUTPUT
    *
   ***
  *****
 *******
*********

CODE : 

void mid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<=2*i+1;j++){
            cout << "*";
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
    cout << endl;
    }
}
int main(){
int n;
cin >> n;
mid(n);
}
