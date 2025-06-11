#include<iostream>
#include<vector>
using namespace std;
int maxconsecutive(vector<int> arr,int n){
    int cnt = 0;
    int maxi = 0;
    for(int n : nums)){
        if(n==1){
            cnt++;
            maxi = max(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }
    return maxi;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr; // should be of size n-1 as one number is missing

    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    cout << "consecutive one's: " << maxconsecutive(arr, n) << endl;

    return 0;
}
