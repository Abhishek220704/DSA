#include<iostream>
#include<vector>
using namespace std;
int linearsearch(vector<int> arr, int n, int num){
    for(int i = 0; i < n; i++){
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int num;
    cin >> num;

    int result = linearsearch(arr, n, num);

    if(result != -1){
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
