#include <iostream>
#include <vector>
using namespace std;

bool Sorted(vector<int> &arr, int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i-1]) {
        }
        else{
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxVal = Sorted(arr, n);
    cout << "SORTED: " << maxVal << endl;

    return 0;
}

/*
bool sorted(vector<int> arr){
    for(int i=0;i<n;i++){
        int cnt = 0;
        int n = arr.count();
        if
    }
