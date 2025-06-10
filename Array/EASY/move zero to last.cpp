#include<iostream>
#include<vector>
using namespace std;

vector<int> movezero(vector<int> arr, int n) {
    vector<int> temp;
    // Copy non-zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }
    // Fill remaining with zeros
    while (temp.size() < n) {
        temp.push_back(0);
    }
    return temp;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);  // Reserve size
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = movezero(arr, n);

    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
