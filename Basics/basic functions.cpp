#include<iostream>
using namespace std;
/*
1) // basic name print function
void printName(){
    cout << "Hey";
}
int main(){

    printName();
    return 0;
}
2) // using parameter in function
void printName(string name){
    cout << "Hey " << name;
}
int main(){
    string name;
    cin >> name;
    printName(name);
    return 0;
}

// take input  and sum of 2 number
void Sum(int num1,int num2){
    int sum;
    sum= num1 + num2;
    cout << "sum is : " << sum;
}
int main(){
    int num1,num2;
    cout << "ENTER TWO NUMBER : ";
    cin >> num1 >> num2;
    Sum(num1,num2);
    return 0;
}

// which number is greater
void Greater(int num1,int num2){
    if(num1>num2){
        cout << "Num1 is greater";
    }
    else if(num2>num1){
        cout << "Num2 is greater";
    }
    else{
        cout << "Num1 and Num2 is equal";
    }
}
int main(){
int num1,num2;
cout << "Enter Num1 and Num2: ";
cin >> num1 >> num2;
Greater(num1,num2);
return 0;
}


// normal function for num
void dosomething(int num){
    cout << num << endl;
    num = num + 5;
    cout << num << endl;
    num = num + 5;
    cout << num;
}
int main(){
    int num = 5;
    dosomething(num);
    return 0;
}
*/
// normal function for string
void dosomething(string s){
    s[0] = 't';
    cout << s;
}
int main(){
string s;
s = 'raj';
dosomething(s);
cout << s;
return 0;
}
