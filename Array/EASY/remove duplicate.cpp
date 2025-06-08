#include<iostream>
#include<vector>
using namespace std;
int remove_duplicate(vector<int> &arr, int n){
    int i =0;
    for(int j=1;j<n;j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    int removed = remove_duplicate(arr,n);
    cout << removed << endl;

    for(int k = 0; k < removed; k++) {
    cout << arr[k] << " ";
    }

    return 0;
    }
