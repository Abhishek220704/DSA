#include <iostream>
#include<vector>
using namespace std;
int getsingleelement(vector<int> arr,int n){
    int xorr = 0;
    for(int i=0;i<n;i++){
        xorr = xorr ^ arr[i];
    }
    return xorr;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int element = getsingleelement(arr,n);
    cout << element;

    return 0;
}
