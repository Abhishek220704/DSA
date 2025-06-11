#include<iostream>
#include<vector>
using namespace std;

int missing(vector<int> arr, int n) {
    int XOR1 = 0; // XOR of numbers from 1 to n
    int XOR2 = 0; // XOR of array elements

    for (int i = 0; i < n - 1; i++) {
        XOR2 = XOR2 ^ arr[i];    // XOR of array elements
        XOR1 = XOR1 ^ (i + 1);   // XOR of 1 to n-1
    }

    XOR1 = XOR1 ^ n; // include last number n in XOR1

    return XOR1 ^ XOR2; // missing number
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n - 1); // should be of size n-1 as one number is missing

    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    cout << "Missing number: " << missing(arr, n) << endl;

    return 0;
}
